#include "Bild.h"
#include "Audio.h"
#include "Medium.h"
int main(int argc, char const *argv[])
{
    Medium* media[2];
    media[0] = new Audio("Lost", 2023,"Linkin Park", 289);
    media[1] = new Bild("deine Mutter", 2021, "Bönen");
    for(Medium* m : media){
        m->druckeDaten();
    }
    return 0;
}
