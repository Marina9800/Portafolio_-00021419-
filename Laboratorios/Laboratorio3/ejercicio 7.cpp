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
    void mostrarLista(void);
    void eliminarEle(nodo *,int);
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
    void eliminarEle(int dato){        
        nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && p->dato != dato){
        q = p;
        p = p->sig;
    }
    if(p != NULL){
        if(q != NULL){
            q->sig = p->sig;
        }
        else{
            pInicio->sig = p->sig;
            delete p;
        }
    }
    else{
        cout << "Dato a borrar NO existe" << endl;
    }
        
    }
};

int main() {
    Lista miLista;
    char resp,respuesta;
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
    
    cout<<"\nDesea eliminar un dato(s/n): ";
    cin>>respuesta;
    

    while(respuesta == 's'){
        cout<<"Que dato desea eliminar: ";
        cin >> dato;
        
        miLista.eliminarEle(dato);
        cout<<"\nDesea eliminar un dato(s/n): ";
        cin>>respuesta;;
    } 
    cout<<"\n Mostrar Lista: "<<endl;
    miLista.mostrarLista();
   
    return 0;
}



