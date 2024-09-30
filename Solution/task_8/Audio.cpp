#include "Audio.h"
#include <iostream>
Audio::Audio(std::string titel, int jahr, std::string interpret, int dauer=0) : Medium(titel, jahr) , interpret{interpret}, dauer{dauer}{
}

void Audio::druckeDaten(){
    std::cout << "ID = " << get_id() << " \" " << get_titel() << " \" " << " von " << get_interpret() 
    << get_jahr() << " Spieldauer: " << get_dauer() << " sek." << std::endl;
}