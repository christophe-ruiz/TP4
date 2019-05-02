#include "alarme.h"
#include <iostream>

using namespace std;
using namespace nsDigicode;

Alarme::Alarme()
{}

void Alarme::declencher (){
    while (true) {
        cout << "Alarme : la porte n'a pas été refermée" << endl;
        sleep(1);
    }
}
