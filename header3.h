#include "header2.h"
class Tienda{
private:
LinkedList* inventario;
public:
Tienda(LinkedList* inventario_){
    inventario = inventario_;
}
void agregarProducto(){
string tipoProducto;
cin>>tipoProducto;
if(tipoProducto == "Televisor"){
    string marca_,modelo_,resol_,id_;
    long precio_;
    cout<<"Ingrese la marca: "<<endl;
    cin>>marca_;
    cout<<"Ingrese el modelo(año): "<<endl;
    cin>>modelo_;
    cout<<"Ingrese el id: "<<endl;
    cin>>id_;
    cout<<"Ingrese la resolución(pixeles x pixeles): "<<endl;
    cin>>resol_;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio_;
    agregarTelevisor(marca_,modelo_,precio_,resol_,id_);
}
else if(tipoProducto == "Computador"){
    string marca_,modelo_,resol_,id_,almacenamiento_;
    long precio_;
    cout<<"Ingrese la marca: "<<endl;
    cin>>marca_;
    cout<<"Ingrese el modelo(año): "<<endl;
    cin>>modelo_;
    cout<<"Ingrese el id: "<<endl;
    cin>>id_;
    cout<<"Ingrese la resolución(pixeles x pixeles): "<<endl;
    cin>>resol_;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio_;
    cout<<"Ingrese la capacidad de almacenamiento: "<<endl;
    cin>>almacenamiento_;
    agregarComputador(marca_,modelo_,precio_,resol_,almacenamiento_,id_);
}
else if(tipoProducto == "Celular"){
    string marca_,modelo_,resol_,id_,almacenamiento_;
    long precio_;
    cout<<"Ingrese la marca: "<<endl;
    cin>>marca_;
    cout<<"Ingrese el modelo(año): "<<endl;
    cin>>modelo_;
    cout<<"Ingrese el id: "<<endl;
    cin>>id_;
    cout<<"Ingrese la resolución(pixeles x pixeles): "<<endl;
    cin>>resol_;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio_;
    cout<<"Ingrese la capacidad de almacenamiento: "<<endl;
    cin>>almacenamiento_;
    agregarCelular(marca_,modelo_,precio_,resol_,almacenamiento_,id_);
}
else{
    cout<<"ERROR"<<endl;
}      
}
void eliminarProducto(){
    
}
private:
void agregarTelevisor(string marca_, string modelo_,long precio_, string resol_, string id_){
Producto* prod = new Televisor(marca_,modelo_,precio_,resol_,id_);
inventario->agregarAlFinal(prod);
}
void agregarComputador(string marca_, string modelo_,long precio_, string resol_, string almacenamiento_, string id_){
Producto* prod = new Computador(marca_,modelo_,precio_,resol_,almacenamiento_,id_);
inventario->agregarAlFinal(prod);
}
void agregarCelular(string marca_, string modelo_,long precio_, string resol_, string almacenamiento_, string id_){
Producto* prod = new Computador(marca_,modelo_,precio_,resol_,almacenamiento_,id_);
inventario->agregarAlFinal(prod);
}
};