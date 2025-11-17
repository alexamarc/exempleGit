#include <iostream>
#include "serviceCalcul.h"

double* serviceCalcul::calculerMontantTTC(double* d, int i){
    grilleCouts = addition->addition(d, i);
    grilleCouts = tva->tva(grilleCouts);
    return grilleCouts;
}