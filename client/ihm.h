#include <iostream>
#include "services/serviceFichier.h"

namespace IHM {
    class IHM {
        private :
            serviceCalcul* calcul;
            serviceFichier* fichier;
        public: 
            void run();
    } 
} 