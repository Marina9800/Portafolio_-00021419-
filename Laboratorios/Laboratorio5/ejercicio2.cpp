#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *hijoIzq;
    nodo *hijoDer;
};
class ABB{
private:
    nodo *pArbol;
public:
    ABB(void);
    void operaciones(void);
    void mostrarIn(void);
    void mostrarIn(nodo *);
    void insNodo(int);
    void insNodo(nodo **, int);
    void intercambiar(void);
    void intercambiar(nodo *);
};
ABB::ABB(void){
    pArbol = NULL;
}
void ABB::insNodo(int dato){
    insNodo(&pArbol, dato);
}
void ABB::insNodo(nodo **p, int dato){
    if(!(*p)){
        *p = new nodo;
        (*p)->dato = dato;
        (*p)->hijoIzq = (*p)->hijoDer = NULL;
    }
    else
        if(dato < (*p)->dato){
            cout << "Irse a la Izquierda" << endl;
            insNodo(&((*p)->hijoIzq), dato);
        }
        else
            if(dato > (*p)->dato){
                cout << "Irse a la derecha" << endl;
                insNodo(&((*p)->hijoDer), dato);
            }
            else
                cout << "El nodo ya existe\n";
}
void ABB::mostrarIn(void)
{
    cout << "Vamos a mostrarIn" << endl;
    mostrarIn(pArbol);
}
void ABB::mostrarIn(nodo *p)
{
    if(p != NULL){
        mostrarIn(p->hijoIzq);
        cout << p ->dato;
        mostrarIn(p->hijoDer);
    }
}
void ABB::intercambiar(void)
{
    intercambiar(pArbol);
}
void ABB::intercambiar(nodo *p)
{
    if(p != NULL){
        intercambiar(p->hijoDer);
        cout << p ->dato;
        intercambiar(p->hijoIzq);
    }
}
void ABB::operaciones(void)
{
    char resp;
    int dato;
    
    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
        insNodo(dato);
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }    
    cout << "\nMostrar in-orden(ascendente) : " << endl;
    mostrarIn( );
    cout << "\nMostrar in-orden(descendente) : " << endl;
    intercambiar( );
}
int main(void){
    
    ABB miArbol;
    miArbol.operaciones();

    return 0;
}
