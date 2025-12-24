#include <string>
#include <iostream>
#include <memory>
#include "../include/funzioni.hpp"
#include "garage.cpp"

using namespace std;

garage Garage;


void stampa_info_veicolo_prova(){

    I_veicolo* v1;
    v1 = new veicolo_prova;

    std::cout << "----------- Stampa di prova -----------" << endl;
    std::cout << "Tipo:" + v1->get_tipo() << endl;
    std::cout << "Modello:" +  v1->get_modello() << endl;
    std::cout << "Colore:" + v1->get_colore() << endl;
    std::cout << "Peso:" + to_string(v1->get_peso()) << endl;
    std::cout << "Posti:" + to_string(v1->get_posti()) << endl;
    std::cout << "Velocita:" + to_string(v1->get_velocita()) << endl;
    std::cout << "Cavalli:" + to_string(v1->get_cavalli()) << endl;
    std:cout << "----------- Fine stampa di prova -----------" << endl;

}

void aggiungi_veicolo(){

    string tipo, modello, colore;
    int peso, posti, velocita, cavalli;

    std::cout << "----------- Inserisci i dati del veicolo -----------" << endl;
    std::cout << "Inserisci il tipo di mezzo: " << endl;
    std::cin >> tipo;
    std::cout << "Inserisci il modello del mezzo: " << endl;
    std::cin >> modello;
    std::cout << "Inserisci il colore del mezzo: " << endl;
    std::cin >> colore;
    std::cout << "Inserisci i cavalli del mezzo: " << endl;
    std::cin >> cavalli;
    std::cout << "Inserisci la velocita del mezzo: " << endl;
    std::cin >> velocita;    
    std::cout << "Inserisci il peso del mezzo: " << endl;
    std::cin >> peso;
    std::cout << "Inserisci i posti disponibili del mezzo: " << endl;
    std::cin >> posti;
    cout << "----------- Fine inserimento dati -----------" << endl;

    I_veicolo* mezzo_da_aggiungere;
    mezzo_da_aggiungere = new veicolo(velocita, posti, peso, cavalli, tipo, modello, colore);

    Garage.add_element(unique_ptr<I_veicolo>(mezzo_da_aggiungere));
    
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
    std::cout << "----> Le ricerche sono fatte attraverso ID <----" << endl;
    std::cout << "========== Fine menu di gestione ========== \n" << endl;

}

void scelta_azione(){

    int scelta;
    do{
        menu_azioni();
        std::cout << "Scegli che azione eseguire: " << endl;
        std::cin >> scelta;
        switch(scelta){
            case 1:
                aggiungi_veicolo();
                break;
            case 2:
                Garage.show_element();
                break;
        }
    }while(scelta != 0);

}