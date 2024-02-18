#ifndef Mediums
#define Mediums
#include<string>
class Medium{
    private:
    static int running_id;
    const int id;
    std::string titel;
    int jahr;
    public:
    int alter();
    virtual void druckeDaten() = 0;
    Medium(std::string titel, int jahr);
    int get_id(){return this->id;};
    std::string get_titel(){return this->titel;}
    int get_jahr(){return jahr;}
};
#endif