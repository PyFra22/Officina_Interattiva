#include <vector>
#include <memory>
#include "../include/Imezzo.hpp"
class garage{

    private:

        std::vector<unique_ptr<I_veicolo>> veicolo;

    public:
    
        void add_element(unique_ptr<I_veicolo> v, int id){
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
                std::cout << "ID: " << v->get_ID() << endl;
            }
        }

        void show_id_element(){
            std::cout << "===== Lista ID dei veicoli registrati =====" << endl;
            for(const auto& v: veicolo){
                std::cout << "Tipo: " << v->get_tipo() << " Modello: " << v->get_modello() << " Con ID: "<< v->get_ID() << endl;
            }
        }

        void delete_vehicle_ID(int id){
            for (auto v = veicolo.begin(); v != veicolo.end(); ){
                if ((*v)->get_ID() == id) {
                    v = veicolo.erase(v);
                    std::cout << "Veicolo eliminato con successo" << endl;
                    break;
                }else{
                    v++;
                }
                if (!(v != veicolo.end() && (*v)->get_ID() != id)){
                    std::cout << "ID del veicolo non esistente" << endl;  
                }
            } 
        } 
};