#include "voyant.h"

namespace nsDigicode {

    Voyant::Voyant(Couleur couleur, Etat etat): couleur(couleur), etat(etat)
    {

    }

    void Voyant::allumer() {
        if (this->etat == eteint)
            this->etat = allume;
    }

    void Voyant::eteindre() {
        if (this->etat == allume)
            this->etat = eteint;
    }

    string Voyant::getStatut(){
        if (this->etat == allume)
            return "ON";
        else
            return "OFF";
    }

}
