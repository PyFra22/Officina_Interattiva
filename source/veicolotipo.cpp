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
        int ID = 578;

    public:

        int get_velocita(){return velocita;}
        int get_posti(){return posti;}
        string get_tipo(){return tipo;}
        string get_modello(){return modello;}
        int get_peso(){return peso;}
        int get_cavalli(){return hp;}
        string get_colore(){return colore;}
        int get_ID(){return ID;}
        void get_Info(){
            std::cout << "===== Stampa di esempio =====" << endl;
            std::cout << "Velocita: " << get_velocita() << endl;
            std::cout << "Posti: " << get_posti() << endl;
            std::cout << "Tipo: " << get_tipo() << endl;
            std::cout << "Modello: " << get_modello() << endl;
            std::cout << "Peso: " << get_peso() << endl;
            std::cout << "Potenza: " << get_cavalli() << endl;
            std::cout << "Colore: " << get_colore() << endl;
            std::cout << "ID: " << get_ID() << endl;
            std::cout << "===== Stampa di esempio =====" << endl;
        }

};

class veicolo : public I_veicolo{

    private:
        int velocita, posti, peso, hp, id;
        string tipo, modello, colore;
    public:

        veicolo(int vel, int pst, int ID, int ps, int cav,const std::string& tp, const std::string& mod, const std::string& col)
        : velocita(vel), posti(pst), id(ID),peso(ps), hp(cav),
          tipo(tp), modello(mod), colore(col) {}

        int get_velocita(){return velocita;}
        int get_posti(){return posti;}
        string get_tipo(){return tipo;}
        string get_modello(){return modello;}
        int get_peso(){return peso;}
        int get_cavalli(){return hp;}
        string get_colore(){return colore;}
        int get_ID(){return id;}

        void get_Info(){
            std::cout << "Velocita: " << get_velocita() << endl;
            std::cout << "Posti: " << get_posti() << endl;
            std::cout << "Tipo: " << get_tipo() << endl;
            std::cout << "Modello: " << get_modello() << endl;
            std::cout << "Peso: " << get_peso() << endl;
            std::cout << "Potenza: " << get_cavalli() << endl;
            std::cout << "Colore: " << get_colore() << endl;
            std::cout << "ID: " << get_ID() << endl;
        }
};
