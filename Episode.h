#ifndef EPISODE_H
#define EPISODE_H

#include "Video.h"
#include <iostream>

class Episode: public Video{
    private:
        int season;

    public:
        //Constructor:
        Episode();
        Episode(int id, int largo, float rate, string nombre, string genero, int temporada);
        // ==============getters====================
        int getSeason();
        // ==============setters====================
        void setSeason(int temporada);    
};

Episode::Episode():Video(){
    season = 0;
}
Episode::Episode(int id, int largo, float rate, string nombre, string genero, int temporada):Video(id,largo,rate,nombre,genero){
    season = temporada;
}

int Episode::getSeason(){
    return season;
}

void Episode::setSeason(int temporada){
    season = temporada;
}

#endif