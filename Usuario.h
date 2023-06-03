#ifndef USUARIO_H
#define USUARIO_H

class Usuario{
    private:
        string nombre;
        int edad;

    public:
        Usuario();
        Usuario(string _nombre, int _edad);
        string getNombre();
        int getEdad();
        void setNombre(string _nombre);
        void setEdad(int _edad);
};

Usuario::Usuario(){
    nombre = "";
    edad = 0;
}

Usuario::Usuario(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

string Usuario::getNombre(){
    return nombre;
}

int Usuario::getEdad(){
    return edad;
}

void Usuario::setNombre(string _nombre){
    nombre = _nombre;
}

void Usuario::setEdad(int _edad){
    edad = _edad;
}

#endif
