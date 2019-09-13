# include  < iostream >
# include  < cmath >
usando el  espacio de nombres  estándar ;
nulo  alcalde ( int n) {
    int vector [ 100 ], mayor = 0 ;
    para ( int i = 0 ; i <n; i ++) {
        cout << i + 1 << " numero: " ;
        cin >> vector [i];
        if (vector [i]> mayor)
            mayor = vector [i];
    }
    cout << " el mayor es: " << alcalde;
}
int  main ()
{
    int n;
    cout << " cuantos elementos desea ingresar? " ;
    cin >> n;
    alcalde (n);

    devuelve  0 ;
}