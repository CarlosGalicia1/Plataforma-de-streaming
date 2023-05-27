#ifndef VIDEOJUEGO_H
#define VIDEJUEGO_H

#include <iostream>
#include <vector>
#include "Video.h"

using namespace std;

class Videojuego: public Video{
    private:
        int monedas, nivel, salud;
        bool powerup;

    public:
        Videojuego();
        Videojuego(int _monedas, int _nivel, bool _powerup, int _salud);
        int getMonedas();
        int getNivel();
        bool getPowerup();
        int getSalud();
        void setMonedas(int _monedas);
        void setNivel(int _nivel);
        void setPowerup(bool _powerup);
        void setSalud(int _salud);
};

Videojuego::Videojuego(){
    monedas = 0;
    nivel = 0;
    salud = 0;
    powerup = false;
}

Videojuego::Videojuego(int _monedas, int _nivel, bool _powerup, int _salud){
    monedas = _monedas;
    nivel = _nivel;
    powerup = _powerup;
    salud = _salud;
}

int Videojuego::getMonedas(){
    return monedas;
}

int Videojuego::getNivel(){
    return nivel;
}

bool Videojuego::getPowerup(){
    return powerup;
}

int Videojuego::getSalud(){
    return salud;
}

void Videojuego::setMonedas(int _monedas){
    monedas = _monedas;
}

void Videojuego::setNivel(int _nivel){
    nivel = _nivel;
}

void Videojuego::setPowerup(bool _powerup){
    powerup = _powerup; 
}

void Videojuego::setSalud(int _salud){
    salud = _salud;
}

#endif