#include <string>
#include <iostream>
#include "../include/funzioni.hpp"

using namespace std;

void stampa_info_veicolo_prova(){

    I_veicolo* v1;
    v1 = new veicolo_prova;

    cout << "----------- Stampa di prova -----------" << endl;
    cout << "Tipo:" + v1->get_tipo() << endl;
    cout << "Modello:" +  v1->get_modello() << endl;
    cout << "Colore:" + v1->get_colore() << endl;
    cout << "Peso:" + to_string(v1->get_peso()) << endl;
    cout << "Posti:" + to_string(v1->get_posti()) << endl;
    cout << "Velocita:" + to_string(v1->get_velocita()) << endl;
    cout << "Cavalli:" + to_string(v1->get_cavalli()) << endl;
    cout << "----------- Fine stampa di prova -----------" << endl;

}


void menu_azioni(){

    std::cout << "========== Menu di gestione dell Officina ==========" << endl;
    std::cout << "1. Aggiungi veicolo" << endl;
    std::cout << "2. Cerca veicolo" << endl;
    std::cout << "3. Modifica informazioni di un veicolo" << endl;
    std::cout << "4. Lista dei veicoli registrati" << endl;
    std::cout << "5. Inserire un problema di un veicolo" << endl;
    std::cout << "6. Riparare tutti i veicoli" << endl;
    std::cout << "7. Elimina un veicolo" << endl;

    std::cout << "----> Le ricerche sono fatte attraverso l ID <----" << endl;
    std::cout << "========== Fine menu di gestione ==========" << endl;

}