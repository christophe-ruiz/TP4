#ifndef PORTE_H
#define PORTE_H
#include "ObjetTempo.h"
#include "capteur.h"

namespace nsDigicode {
    class Porte: public ObjetTempo
    {
    private:
        bool fermer();
        Capteur myCapteur;
    public:
        Porte(Chrono* chrono, int nbSecondes);
        bool ouvrir();
    };
}
#endif // PORTE_H
