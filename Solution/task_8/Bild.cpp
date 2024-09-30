#include "Medium.h"
#include "Bild.h"
#include <string>
#include <iostream>
Bild::Bild(std::string titel, int jahr, std::string ort) : Medium(titel, jahr), ort{ort}{

}
void Bild::druckeDaten(){
    std::cout << " ID = " << get_id() << " \"" << get_titel() << "\" "<< "aufgenommen im Jahr " << get_jahr()
    << " in " << get_ort() << "." << std::endl;
}