#include "multiplosdel97.h"
#include "secuencia.h"
#include <stdlib.h>
#include <time.h>
MultiplosDel97::MultiplosDel97()
{

}

void MultiplosDel97::generarValores(){
    srand(time(NULL));
    int mul = (rand()%15)*97;
    srand (time(NULL));
    int mul2 = (rand()%100)*97;
    for (int i =0; i<4; i++)
    {
        valores[i]=mul+mul2;
    }
}

MultiplosDel97::~MultiplosDel97()
{

}

