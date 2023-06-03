#ifndef MOVIE_H
#define MOVIE_H

class Movie: public Contenido{
    public:
    //Constructor:
    Movie();
    Movie(int id, int largo, float rate, string nombre, string genero, bool restringido);
    //===============metodos=======================
    string reproducir() override;
};

Movie::Movie():Contenido(){
}

Movie::Movie(int id, int largo, float rate, string nombre, string genero, bool restringido){
    ID = id;
    length = largo;
    rating = rate;
    name = nombre;
    genre = genero;
    restricted = restringido;
}

string Movie::reproducir(){
    return "Reproduciendo pelicula " + this->getName() + "\n";
}

#endif
