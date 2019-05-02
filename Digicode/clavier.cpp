#include "clavier.h"
#include "kbhit.h"

using namespace nsDigicode;

clavier::clavier()
{

}

int clavier::saisirChiffre(){
    int temp = _kbhit();
    if (temp == 0)
        return -1;
    else
        return temp - '0';
}
