#include <iostream>
#include <cmath>
using namespace std;

int sumatoria(int x, int n){
    if(n==0)
        return 1;
    else{
        return pow(x,n) + sumatoria(x,n-1);
    }
}

int main()
{
    int x, n;
    cout<<"ingrese el valor de x: ";
    cin>>x;
    cout<<"ingrese el valor de n: ";
    cin>>n;

    cout<<sumatoria(x,n);

    return 0;
}