#ifndef VIDEO_H
#define VIDEO_H

class Video {
    protected:
        int ID, length;
        float rating;
        string name, genre;
        bool restricted;

    public:
        // ==============getters====================
        int getID();
        string getName();
        int getLength();
        string getGenre();
        float getRating();
        bool getRestricted();
        //===============setters=======================
        void setID(int id);
        void setName(string nombre);
        void setLength(int largo);
        void setGenre(string genero);
        void setRating(float rate);
        void setRestricted(bool restringido);
        //===============metodos=======================
        virtual string reproducir()=0;
};

int Video::getID(){
    return ID;
}

string Video::getName(){
    return name;
}

int Video::getLength(){
    return length;
}

string Video::getGenre(){
    return genre;
}

float Video::getRating(){
    return rating;
}

bool Video::getRestricted(){
    return restricted;
}

void Video::setID(int id){
    ID = id;
}

void Video::setName(string nombre){
    name = nombre;
}

void Video::setLength(int largo){
    length = largo;
}

void Video::setGenre(string genero){
    genre = genero;
}

void Video::setRating(float rate){
    rating = rate;
}

void Video::setRestricted(bool restringido){
    restricted = restringido;
}

#endif
