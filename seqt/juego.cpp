#include "juego.h"
#include "secuenciapar.h"
#include "secuenciaimpar.h"
#include "multiplosdel97.h"
#include "secuenciaalcuadrado.h"
#include "secuenciadesuma.h"
#include "sumadelos2anteriores.h"
#include <stdlib.h>
#include <time.h>

Juego::Juego()
{
    secuencia = 0;
    this->puntos = 0;
    this->regenerar();
}

void Juego::regenerar() {
    if (secuencia != 0) delete secuencia;
    srand(time(NULL));
    int aleatorio = (rand() % 6);

    switch (aleatorio) {
    case 0:
        secuencia = new SecuenciaPar();
        break;
    case 1:
        secuencia = new SumaDeLos2Anteriores();
        break;
    case 2:
        secuencia = new MultiplosDel97();
        break;
    case 3:
        secuencia = new secuenciaalcuadrado();
        break;
    case 4:
        secuencia = new SecuenciaDeSuma();
        break;
    case 5:
        secuencia = new MultiplosDel97();
        break;
    default:
        secuencia = new SecuenciaImpar();
        break;
    }
    secuencia->generarValores();
}

int Juego::getValor0(){
    return this->secuencia->getValor(0);
}

int Juego::getValor1(){
    return this->secuencia->getValor(1);
}

int Juego::getValor3(){
    return this->secuencia->getValor(3);
}

bool Juego::validar(int numero) {
    bool resultado = false;
    if (numero == this->secuencia->getValor(2)) {
        this->puntos++;
        resultado = true;
    } else {
        this->puntos--;
    }
    this->regenerar();
    return resultado;
}

int Juego::getPuntos(){
    return this->puntos;
}
