#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    protected:
        int attente;
        Chrono* chrono;
    private:
        int delai;
    public:
        ObjetTempo (Chrono* p_chrono , int nbSecondes);
        Chrono* getChrono() const;
        void finTempo();
        int getDelai() const;
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
