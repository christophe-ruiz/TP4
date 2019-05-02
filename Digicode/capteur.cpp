#include "capteur.h"
#include "kbhit.h"


namespace nsDigicode {

    Capteur::Capteur()
    {
    }

    int detecter(){
        return _kbhit();
    }

}
