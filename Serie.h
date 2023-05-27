#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Episode.h"
#include <iostream>
#include <vector>

class Serie: public Video{
    private:
        vector<Episode> vect;
        //Episode episodio[];
    public:
        //Constructor:
        Serie(int id, int largo, float rate, string nombre, string genero,  vector<Episode> _vect);
        //===============setters=======================
        vector<Episode> getEpisodes();                
};

Serie::Serie(int id, int largo, float rate, string nombre, string genero,  vector<Episode> _vect):Video(id,largo,rate,nombre,genero){    
    vect = _vect;
}

// El metodo getEpisodes retorna un vector de elementos de tipo Episode
vector<Episode> Serie::getEpisodes(){
    return vect;
}

#endif