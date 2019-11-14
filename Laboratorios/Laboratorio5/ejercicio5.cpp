#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *sig;
    nodo *hijoIzq;
    nodo *hijoDer;
};
class Lista{
   private:
    nodo *pInicio;
   public:
    Lista(void){
    void insertarInicioLista(int);
    void mostrarLista(void);
    void mostrarIn(void);
    void mostrarIn(nodo *);
    void insNodo(int);
    void insNodo(nodo **, int);
    pInicio=NULL;
    }
    void insertarInicioLista(int dato){
    nodo *nuevo;
    nuevo = new nodo;
    nuevo->dato=dato;
    nuevo->sig=pInicio;
    pInicio=nuevo;
   }
    void mostrarLista(void) {
    nodo *s = pInicio;

    cout << "Los elementos de la lista son:" << endl;
    while (s != NULL) {
        cout << s->dato << " ";
        s = s->sig;
    }
}
    void insNodo(int dato){
    insNodo(&pInicio, dato);
}
void insNodo(nodo **p, int dato){
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
 void mostrarIn(void)
{
    mostrarIn(pInicio);
}
void mostrarIn(nodo *p)
{
    if(p != NULL){
        mostrarIn(p->hijoIzq);
        cout << p ->dato;
        mostrarIn(p->hijoDer);
    }
}
};
int main() {
    Lista miLista;
    char resp;
    int dato;
    
    cout << "Desea meter un dato (s/n)?";
    cin>> resp;
    while(resp == 's'){
        cout << "Digite el dato: ";
        cin >> dato;
   
        miLista.insertarInicioLista(dato);
        cout << "Desea meter un dato (s/n)?";
        cin>> resp;
    }  
    cout<<"\n Mostrar Lista: "<<endl;
    miLista.mostrarLista();
    cout << "\nMostrar in-orden(ascendente) : " << endl;
    miLista.mostrarIn( );
    
   
    return 0;
}