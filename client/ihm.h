#include <iostream>
#include "serviceCalcul.h/serviceFichier.h"

namespace IHM {
    class IHM {
        private :
            serviceCalcul* calcul;
            serviceFichier* fichier;
        public: 
            void run();
    } 
} 