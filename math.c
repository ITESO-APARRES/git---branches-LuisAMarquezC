/*
    Funciones matematicas
*/

#include "math.h"

int dobleInt(int a){
    if(a > MAXINT){
        return -1;
    }

    return 2*a;
}