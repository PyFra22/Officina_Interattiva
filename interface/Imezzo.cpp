#include <iostream>
#include <string>
using namespace std;

class I_veicolo{
    public:

        virtual int get_velocita() = 0;
        virtual int get_posti() = 0;
        virtual string get_tipo() = 0;
        virtual string get_modello() = 0;
        virtual int get_peso() = 0;
        virtual int get_cavalli() = 0;
        virtual string get_colore() = 0;

};

