#ifndef VOYANT_H
#define VOYANT_H
#include <iostream>

using namespace std;

namespace nsDigicode {

    enum Couleur {rouge, vert};
    enum Etat {allume, eteint};

    class Voyant
    {
    private:
        Couleur couleur;
        Etat etat;
    public:
        Voyant(Couleur couleur, Etat etat);
        void allumer();
        void eteindre();
        string getStatut();
    };
}

#endif // VOYANT_H
