#pragma once

namespace app {
    namespace composants{
        class TVA {
            private :
                const double tva = 1.2;
                double prix;
            public :
            TVA();
            TVA(double, double);
            ~TVA();
            double calculTVA(double){
                return prix*tva;
            }
        };
    }
}