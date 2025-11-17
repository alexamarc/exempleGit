#include "CLaddition.h"

namespace app{
    namespace composants{
        CLaddition::CLaddition(){};
        double CLaddition::addition(double* const p1 , int const p2 ) const{
            return *p1+p2; /* on comment pour le fun*/
        }

    }
}