#include <string>
using namespace std;
class Producto{
protected:
    string marca,modelo,spec,resol,id;
    long precio;
public:
    long getPrecio(){
        return precio;
    }
    void setPrecio(long precio_){
        precio = precio_;
    }
    string getMarca(){
        return marca;
    }
    void setMarca(string marca_){
        marca = marca_;
    }
    string getModelo(){
        return modelo;
    }
    void setModelo(string modelo_){
        modelo = modelo_;
    }
    string getSpec(){
        return spec;
    }
    string getId(){
        return id;
    }
    void setId(string id_){
        id = id_;
    }
    virtual void setSpec(){}
    string getInfoProducto(){
        string infoProducto = marca,modelo,spec,precio,id;
        return infoProducto;
    }

};
class Televisor: public Producto
{
public:
Televisor(string marca_, string modelo_,long precio_, string resol_, string id_){
marca = marca_;
modelo = modelo_;
precio = precio_;
resol = resol_;
id = id_;
}
void setSpec(){
    spec = "Resolución de pantalla: " + resol;
}
};
class Computador: public Producto{
private:
string almacenamiento;
public:
Computador(string marca_, string modelo_,long precio_, string resol_, string almacenamiento_, string id_){
marca = marca_;
modelo = modelo_;
precio = precio_;
resol = resol_;
id = id_;
almacenamiento = almacenamiento_;
}
void setSpec(){
    spec = "Resolución de pantalla: " + resol + "Almacenamiento: " + almacenamiento;
}
string getAlmacenamiento(){
    return almacenamiento;
}
void setAlmacenamiento(string almacenamiento_){
    almacenamiento = almacenamiento_;
}
};
class Celular: public Producto{
private:
string almacenamiento; 
public:
Celular(string marca_, string modelo_,long precio_, string resol_,string almacenamiento_, string id_){
marca = marca_;
modelo = modelo_;
precio = precio_;
resol = resol_;
id = id_;
almacenamiento = almacenamiento_;
}
void setSpec(){
    spec = "Resolución de pantalla: " + resol + "Almacenamiento: " + almacenamiento;
}
string getAlmacenamiento(){
    return almacenamiento;
}
void setAlmacenamiento(string almacenamiento_){
    almacenamiento = almacenamiento_;
}
};