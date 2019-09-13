#include <iostream>

using namespace std;
void impNum(int,int);
int main() {
//7
    int a=0,b=0,num;

    cout<<"Digite un numero para a: ";
    cin>>a;
    cout<<"Digite un numero para b: ";
    cin>>b;
    impNum(a,b);


    return 0;
}
void impNum(int a, int b) {

    if (a <= b){
        cout << a << " ";
        impNum(a+1,b);

    }
}
