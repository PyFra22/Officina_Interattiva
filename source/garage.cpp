#include <vector>
#include <memory>
#include "../include/Imezzo.hpp"
class garage{

    private:

        vector<unique_ptr<I_veicolo>> veicolo;

    public:
    
        void add_element(unique_ptr<I_veicolo> v){
            veicolo.push_back(std::move(v));
        }
        
        void show_element() const{
            std::cout << "==== Mezzi registrati =====" << endl;
            for(const auto& v: veicolo){
                std::cout << " ===== Dettagli dei mezzi ===== " << endl;
                std::cout << "Tipo: " << v->get_tipo() << endl;
                std::cout << "Modello: " << v->get_modello() << endl;
                std::cout << "Colore: " << v->get_colore() << endl;
                std::cout << "Velocita: " << v->get_velocita() << endl;
                std::cout << "Cavalli: " << v->get_cavalli() << endl;
                std::cout << "Peso: " << v->get_peso() << endl;
                std::cout << "Posti: " << v->get_posti() << endl;
            }
        }
};