/*
    Funciones matematicas
*/

#include "math.h"
#include <stdio.h>

int dobleInt(int a){
    if(a > MAXINT){
        return -1;
    }

    return 2*a;
}

double dobleDouble(double a){
    if(a > MAXDOUBLE){
        return -1;
    }

    return a*2;
}