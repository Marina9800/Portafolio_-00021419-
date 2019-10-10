#include <iostream>

using namespace std;
struct nodo{
    int dato;
    nodo *sig;
};
class Lista{
   private:
    nodo *pInicio;
   public:
    Lista(void){
void insertarInicioLista(int);
    void eliminar(void);
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
 
     void mostrarListaRec(void){
        mostrarListaRec(pInicio);
     }
     void mostrarListaRec(nodo *s){
         if(s!=NULL){
             mostrarListaRec(s->sig);
             cout<<s->dato<<"";
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
    cout<<"\n Mostrar Lista recursiva sentido inverso: "<<endl;
    miLista.mostrarListaRec();
    return 0;
}

