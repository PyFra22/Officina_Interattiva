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
                v->get_Info();
            }
        }

        void show_id_element(){
            std::cout << "===== Lista ID dei veicoli registrati =====" << endl;
            for(const auto& v: veicolo){
                std::cout << "ID del mezzo: "<< v->get_ID() << endl;
            }
        }

        void delete_vehicle_ID(int id){
            for (auto v = veicolo.begin(); v != veicolo.end();){
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

        void research_vehicle_ID(int id){

            bool a = false;
            for(auto v = veicolo.begin(); v != veicolo.end();){
                if((*v)->get_ID() == id){
                    std::cout << "============" << endl;
                    (*v)->get_Info();
                    a = true;
                    break;
                }else{
                    v++;
                }
            }
            if(a == false){
                std::cout << "Errore ID: " << id << " non trovato" << endl;
            }
            
        }
};