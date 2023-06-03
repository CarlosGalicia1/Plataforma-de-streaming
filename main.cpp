#include <vector>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;
#include "Contenido.h"
#include "Episode.h"
#include "Serie.h"
#include "Usuario.h"
#include "Videojuego.h"
#include "Movie.h"

int main(){
    //==========Usuario==========
    Usuario user("Charly", 18);
    user.setEdad(99);
    user.setName("Juan");
    cout << user.getName()<< endl;
    cout << user.getEdad() << endl;

    //==========Videojuego=======
    Videojuego game(1, 10, 1.5, "Zelda", "Accion", false, 0, 0, false, 0);
    game.setID(99);
    game.setName("Mario");
    game.setLength(99);
    game.setGenre("Plataformas");
    game.setRating(5);
    game.setRestricted(true);
    game.setMonedas(99);
    game.setNivel(99);
    game.setPowerup(true);
    game.setSalud(99);
    cout << game.getID() << endl;
    cout << game.getName() << endl;
    cout << game.getLength() << endl;
    cout << game.getGenre() << endl;
    cout << game.getRating() << endl;
    cout << game.getRestricted() << endl;
    cout << game.getMonedas() << endl;
    cout << game.getNivel() << endl;
    cout << game.getPowerup() << endl;
    cout << game.getSalud() << endl;
    cout << game.reproducir() << endl;
    
    //===========Episodio==========
    Episode ep(2, 60, 3.5, "Amanecer", "Terror", 2, false);
    ep.setID(99);
    ep.setName("Un buen dia");
    ep.setLength(99);
    ep.setGenre("Plataformas");
    ep.setRating(5);
    ep.setRestricted(true);
    ep.setSeason(99);
    cout << ep.getID() << endl;
    cout << ep.getName() << endl;
    cout << ep.getLength() << endl;
    cout << ep.getGenre() << endl;
    cout << ep.getRating() << endl;
    cout << ep.getRestricted() << endl;
    cout << ep.getSeason() << endl;
    cout << ep.reproducir() << endl;

    //=========Serie==============
    vector<Episode> episodios= {ep};
    Serie s(3, 4, 4.2, "The walking dead", "Zombies", false, episodios);
    s.setID(50);
    s.setName("Suits");
    s.setLength(10);
    s.setGenre("Drama");
    s.setRating(3.7);
    s.setRestricted(true);
    Episode ep2(7, 78, 3.3, "Caida", "Accion", 1, true);
    s.addEpisode(ep2);
    s.deleteEpisode(2);
    cout << s.getID() << endl;
    cout << s.getName() << endl;
    cout << s.getLength() << endl;
    cout << s.getGenre() << endl;
    cout << s.getRating() << endl;
    cout << s.getRestricted() << endl;
    vector<Episode> episodes = s.getEpisodes();
    cout << episodes[0].getName() << endl;
    cout << s.reproducir() << endl;
    cout << s.reproducir(1) << endl;

    //=========Movie=============
    Movie p(39, 150, 4.9,"Inception", "Drama", true);
    p.setID(500);
    p.setName("Guardianes de la galaxia Vol.3");
    p.setLength(210);
    p.setGenre("Accion");
    p.setRating(5.0);
    p.setRestricted(false);
    cout << p.getID() << endl;
    cout << p.getName() << endl;
    cout << p.getLength() << endl;
    cout << p.getGenre() << endl;
    cout << p.getRating() << endl;
    cout << p.getRestricted() << endl;
    cout << p.reproducir() << endl;
    return 0;
}
