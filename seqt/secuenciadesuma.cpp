#include "secuenciadesuma.h"
#include <stdlib.h>
#include <time.h>


SecuenciaDeSuma::SecuenciaDeSuma()
{

}

void SecuenciaDeSuma::generarValores(){
    srand(time(NULL));
    int par = (rand() % 50);
    srand(time(NULL));
    int par2 = ((rand() % 37)*2);
    for(int i = 0; i<4; i++){
        if(i==0)
            valores[i] = par;
        else if(i==1)
            valores[i] = par2;
        else if(i==2)
            valores[i]= par+par2;
        else if(i==3)
            valores[i]=par+par2+valores[i-1];

    }
}
