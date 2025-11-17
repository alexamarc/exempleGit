#include <iostream>
#include "composants/CLaddition.h"


int main(){
    double value = 2.0;
    double* p2 = &value;
    int p1 = 5;
    composants::CLaddition add;
    double p3 = add.addition(p2,p1);
    std::cout<<"addition de "<< value<<" et "<<p1<< " qui donne "<< p3<< std::endl;
    return 0;
}