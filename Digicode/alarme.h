#ifndef ALARME_H
#define ALARME_H

#include <unistd.h>
#include <iostream>

namespace nsDigicode {
    class Alarme
    {
    public:
        Alarme();
        void declencher();
    };
}
#endif // ALARME_H
