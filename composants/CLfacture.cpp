#include <composants/CLfacture.h>

#include <iostream>

namespace app
{
    namespace composants{

            void app::composants::CLfacture::imprimeFacture(double const p1, double const p2, double const p3) const{
                std::cout << " Il y a " << p1 << " article au prix unitaire " << p2 << " soit un total de " << p3 << " euros" <<std::endl;
        }
    }
    
} 
