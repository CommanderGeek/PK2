#include "Medium.h"
#ifndef Bilders
#define Bilders
#include <iostream>
#include <string>
class Bild : public Medium{
    private:
    std::string ort;
    public:
    Bild(std::string titel, int jahr, std::string ort);
    ~Bild();
    std::string get_ort(){return this->ort;};
    void druckeDaten() override;
};
#endif
