#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include <vector>

class Serie: public Contenido{
    private:
        vector<Episode> vect;
    public:
        //Constructor:
        Serie(int id, int largo, float rate, string nombre, string genero, bool restringido, vector<Episode> episodios);
        //===============setters=======================
        vector<Episode> getEpisodes();    
        //===============metodos=======================
        void addEpisode(Episode _ep);
        void deleteEpisode(int episodio);
        string reproducir() override;  
        string reproducir(int episodio); 
};

Serie::Serie(int id, int largo, float rate, string nombre, string genero,bool restringido, vector<Episode> episodios){ 
    ID = id;
    length = largo;
    rating = rate;
    name = nombre;
    genre = genero;
    restricted = restringido;
    vect = episodios;
}

// El metodo getEpisodes retorna un vector de elementos de tipo Episode
vector<Episode> Serie::getEpisodes(){
    return vect;
}

void Serie::addEpisode(Episode _ep){
    vect.push_back(_ep);
}

void Serie::deleteEpisode(int episodio){
    while (episodio < 1 || episodio > size(vect))
    {
        cout <<"Esta serie contiene "<< to_string(size(vect)) << " episodios, ingrese un numero de episodio a eliminar valido: ";
        cin >> episodio;
    }
    vect.erase(vect.begin()+episodio-1);
}

string Serie::reproducir(){
    return "Reproduciendo serie " + this->getName()+ "\nReproduciento capitulo 1: " + vect[0].getName() + "\n";
}

string Serie::reproducir(int episodio){
    string s1;
    return "Reproduciendo serie " + this->getName()+ "\n" + vect[episodio-1].reproducir() + "\n";
}

#endif
