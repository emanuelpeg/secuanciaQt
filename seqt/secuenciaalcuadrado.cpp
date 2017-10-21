#include "secuenciaalcuadrado.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


secuenciaalcuadrado::secuenciaalcuadrado()
{
}

void secuenciaalcuadrado::generarValores(){

      srand(time(NULL));

      int alcuadrado = pow((rand() % 100),2);

       srand(time(NULL));

       int alcuadradodos = pow((rand()%50),2);


       for(int i=0; i<4; i++){

            valores[i] = alcuadrado + (alcuadradodos * i);

       }

}
