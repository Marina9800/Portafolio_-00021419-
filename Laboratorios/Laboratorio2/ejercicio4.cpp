#include <iostream>
#include<cmath>
using namespace std;
//4
float aproxPIrec(int,int);
int main() {
   int k=0,n;

   cout<<"Digite un numero: ";
   cin>>n;
   cout<<"La aproximacion del numero PI es: "<<aproxPIrec(k,n);


return 0;
}
float aproxPIrec(int k,int n){
    float aproxi=4*((pow(-1,k))/(2*k+1));
    if(n>0){
        return aproxi+aproxPIrec(k+1,n-1);
    }
    return aproxi;

}