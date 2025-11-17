#pragma once
#include "CLaddition.h"
#include "CLtva.h"

using namespace std;

class serviceCalcul{
    public :
        serviceCalcul();
        double* calculerMontantTTC(double*, int);
    private :
        double* grilleCouts;
        CLtva* tva;
        CLaddition* addition;
}