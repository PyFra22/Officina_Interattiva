#include "../include/Imezzo.hpp"

class veicolo_prova : public I_veicolo{

    private:

        int velocita = 100;
        int posti = 5;
        string tipo = "Automibile 5 porte";
        string modello = "BMW serie 7";
        int peso = 1500;
        int hp = 350;  
        string colore = "Blu Navy";

    public:

        int get_velocita(){return velocita;}
        int get_posti(){return posti;}
        string get_tipo(){return tipo;}
        string get_modello(){return modello;}
        int get_peso(){return peso;}
        int get_cavalli(){return hp;}
        string get_colore(){return colore;}

};