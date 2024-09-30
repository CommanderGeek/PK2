#include "Medium.h"
#ifndef Audios
#define Audios
class Audio : public Medium{
    private: 
    std::string interpret;
    int dauer;
    public:
    Audio(std::string titel, int jahr, std::string interpret, int dauer);
    ~Audio();
    std::string get_interpret(){return interpret;};
    int get_dauer(){return this->dauer;};
    void druckeDaten() override;
};
#endif