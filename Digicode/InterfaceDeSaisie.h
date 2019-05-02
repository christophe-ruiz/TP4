#ifndef _INTERFACE
#define _INTERFACE
#include <string>

#include "voyant.h"
#include "clavier.h"
#include "Chrono.h"
#include "ObjetTempo.h"

namespace nsDigicode {

    class InterfaceDeSaisie : public ObjetTempo
    {
    private:
        int myNbChiffresAttendus;
        clavier myClavier;
        Voyant myVoyantVert;
        Voyant myVoyantRouge;

        void statut(std::string="\n");

    public:
        InterfaceDeSaisie(Chrono* pChrono, int delais, int nbChiffres);
        int saisieCode();

        //To do
    }; // InterfaceDeSaisie

} /* ns_Digicode */

#endif /* _INTERFACE */

