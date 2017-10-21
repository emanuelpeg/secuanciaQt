#include "sumadelos2anteriores.h"
#include "secuencia.h"
#include <stdlib.h>
#include <time.h>
SumaDeLos2Anteriores::SumaDeLos2Anteriores()
{

}

void SumaDeLos2Anteriores::generarValores()
{
    srand(time(NULL));
    valores[0] = (rand()%100);
    srand(time(NULL));
    valores[1] = (rand()%100);
    for ( int i=2; i<4; i++)
    {
        valores[i] = valores[i-1]+ valores[i-2];
    }
}

SumaDeLos2Anteriores::~SumaDeLos2Anteriores()
{

}

