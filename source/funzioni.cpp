#include <string>
#include <iostream>
#include <memory>
#include <random>
#include "../include/funzioni.hpp"
#include "garage.cpp"

using namespace std;

garage Garage;

int generaId() {
    static std::mt19937 gen(std::random_device{}());
    static std::uniform_int_distribution<int> dist(1, 1000);
    return dist(gen);
}

void stampa_info_veicolo_prova(){
    I_veicolo* v1;
    v1 = new veicolo_prova;
    v1->get_Info();
}

void aggiungi_veicolo(){

    string tipo, modello, colore;
    int peso, posti, velocita, cavalli, ID;

    ID = generaId();

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "----------- Inserisci i dati del veicolo -----------" << endl;
    std::cout << "Inserisci il tipo di mezzo: " << endl;
    std::getline(std::cin, tipo);
    std::cout << "Inserisci il modello del mezzo: " << endl;
    std::getline(std::cin, modello);
    std::cout << "Inserisci il colore del mezzo: " << endl;
    std::getline(std::cin, colore);
    std::cout << "Inserisci i cavalli del mezzo: " << endl;
    std::cin >> cavalli;
    std::cout << "Inserisci la velocita del mezzo: " << endl;
    std::cin >> velocita;    
    std::cout << "Inserisci il peso del mezzo: " << endl;
    std::cin >> peso;
    std::cout << "Inserisci i posti disponibili del mezzo: " << endl;
    std::cin >> posti;
    std::cout << "L'ID del veicolo é: " << ID << endl;
    cout << "----------- Fine inserimento dati -----------" << endl;

    I_veicolo* mezzo_da_aggiungere;
    mezzo_da_aggiungere = new veicolo(velocita, posti, ID, peso, cavalli, tipo, modello, colore);

    Garage.add_element(unique_ptr<I_veicolo>(mezzo_da_aggiungere), ID);
    
}


void menu_azioni(){

    std::cout << "========== Menu di gestione dell Officina ==========" << endl;
    std::cout << "1. Aggiungi veicolo" << endl;
    std::cout << "2. Lista veicoli salvati" << endl;
    std::cout << "3. Lista ID mezzi salvati" << endl;
    std::cout << "4. Rimuovi veicolo tramite ID" << endl;
    std::cout << "5. DA IMPLEMENTARE" << endl;
    std::cout << "6. DA IMPLEMENTARE" << endl;
    std::cout << "7. DA IMPLEMENTARE" << endl;
    std::cout << "----> Le ricerche sono fatte attraverso ID <----" << endl;
    std::cout << "========== Fine menu di gestione ========== \n" << endl;

}

void scelta_azione(){

    int scelta, ID_selezionato;
    do{
        menu_azioni();
        std::cout << "Scegli che azione eseguire: " << endl;
        std::cin >> scelta;
        std::cin.clear();
        switch(scelta){
            case 1:
                aggiungi_veicolo();
                break;
            case 2:
                Garage.show_element();
                break;
            case 3:
                Garage.show_id_element();
                break;
            case 4:
                std::cout << "Inserire ID del mezzo da rimuovere: " << endl;
                std::cin >> ID_selezionato;
                Garage.delete_vehicle_ID(ID_selezionato);
            case 5:
                std::cout << "Inserire l'ID del mezzo da cercare:" << endl;
                std::cin >> ID_selezionato;
                Garage.research_vehicle_ID(ID_selezionato);
        }
    }while(scelta != 0);

}