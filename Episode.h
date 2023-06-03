#ifndef EPISODE_H
#define EPISODE_H

class Episode: public Video{
    private:
        int season;

    public:
        //Constructor:
        Episode();
        Episode(int id, int largo, float rate, string nombre, string genero,bool restringido, int temporada);
        // ==============getters====================
        int getSeason();
        // ==============setters====================
        void setSeason(int temporada);
        //===============metodos=======================
        string reproducir() override;    
};

Episode::Episode():Video(){
    season = 0;
}
Episode::Episode(int id, int largo, float rate, string nombre, string genero, bool restringido, int temporada){
    ID = id;
    length = largo;
    rating = rate;
    name = nombre;
    genre = genero;
    restricted = restringido;
    season = temporada;
}

int Episode::getSeason(){
    return season;
}

void Episode::setSeason(int temporada){
    season = temporada;
}

string Episode::reproducir(){
    return "Reproduciendo episodio " + this->getName() + "\n";
}
#endif
