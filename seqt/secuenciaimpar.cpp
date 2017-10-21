#include "secuenciaimpar.h"
#include <stdlib.h>
#include <time.h>

SecuenciaImpar::SecuenciaImpar()
{
}

void SecuenciaImpar::generarValores(){
    srand(time(NULL));
    int par = ((rand() % 100) * 2)+1;
    srand(time(NULL));
    int par2 = ((rand() % 50) * 2);
    for(int i = 0; i<4; i++){
        valores[i] = par + (par2 * i);
    }
}
