#include "porte.h"
#include <iostream>

using namespace std;

namespace nsDigicode {

    Porte::Porte(Chrono* chrono, int nbSecondes): ObjetTempo (chrono, nbSecondes){}

    bool Porte::fermer() {
        cout << "La porte est ouverte: fermez la porte" << endl;
        while (myCapteur.detecter() == 0 && attente == 1);
        if (attente == 1){
            this->chrono->arreter();
            return true;
        }
        else return false;
    }

    bool Porte::ouvrir() {
        this->attente = 1;
        this->chrono->demarrer(this);
        while (myCapteur.detecter() == 0 && attente == 1);
        if (attente == 1) return fermer();
        else {
            cout << "La porte se verouille" << endl;
            return true;
        }

    }
}
