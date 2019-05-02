#include "ObjetTempo.h"

namespace nsDigicode {

    ObjetTempo::ObjetTempo(Chrono* p_chrono, int nbSecondes): chrono(p_chrono), attente(nbSecondes) {}

    void ObjetTempo::finTempo(){
        this->attente = 0;
    }

    Chrono* ObjetTempo::getChrono() const {
        return this->chrono;
    }

    int ObjetTempo::getDelai() const {
        return this->delai;
    }

}

