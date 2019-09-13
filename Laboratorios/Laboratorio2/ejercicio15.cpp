#include <iostream>
using namespace std;
int merge(int a[],int,int,int);
int mergeSort(int a[],int,int);
int main() {
    int n=10;
    int a[]={32,4,15,2,67,8,10,6,19,22};

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++)
        cout<< a[i]<<" ";
    return 0;
}
int merge(int a[],int b,int c,int d){
    int n1=c-b+1;
    int n2=d-c;

    int la[n1+1];
    int ra[n2+1];

    for(int i=0; i<n1;i++){
        la[i]=a[b+i];
    }
    for(int j=0;j<n2;j++){
        ra[j]=a[c+j+1];
    }
    la[n1]=1000000;
    ra[n2]=1000000;

    int i=0;
    int j=0;

    for(int k=b;k<c;k++){
        if(la[i]<=ra[j]){
            a[k]=la[i];
            i++;
        }else{
            a[k]=ra[j];
            j++;
        }
    }
}
int mergeSort(int a[],int b,int c){
    int d;
    if(b<c){
        d=(b+c)/2;
        // cout<<"d :"<<d<<endl;
        mergeSort(a,b,d);
        mergeSort(a,d+1,c);
        merge(a,b,c,d);
    }
}