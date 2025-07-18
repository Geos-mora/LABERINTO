/*  Proyecto: Agentes Inteligentes en un Laberinto
    Curso: Fundamentos de Programaci�n Orientada a Objetos (FPOO)
    Universidad del Valle
    Estudiantes: Laura Dayana Tascon Velasco - 2438545
                 Elbert Leandro Moreno Castillo -
                 Daniel Escobar Escobar -
                 Jesus Giovanny Mora -
    Fecha: Mayo 2025 */


#include "Avatar.h"
#include <cstdlib>

using namespace std;


Avatar::Avatar(int filaInicial, int columnaInicial) {
    filaActual = filaInicial;
    columnaActual = columnaInicial;
    movimientos = 0;
}


Avatar::~Avatar() {

}

int Avatar::obtenerFila() const {
    return filaActual;
}


int Avatar::obtenerColumna() const {
    return columnaActual;
}

int Avatar::obtenerMovimientos() const {
    return movimientos;
}


void Avatar::establecerPosicion(int nuevaFila, int nuevaColumna) {
    filaActual = nuevaFila;
    columnaActual = nuevaColumna;
}


void Avatar::incrementarMovimientos() {
    movimientos++;
}


void Avatar::generarMovimientoAleatorio(int& nuevaFila, int& nuevaColumna) const {
    // Array de direcciones posibles: arriba, abajo, izquierda, derecha
    int direcciones[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    // Seleccionar una direcci�n aleatoria
    int direccionElegida = rand() % 4;

    // Calcular nueva posici�n basada en la direcci�n elegida
    nuevaFila = filaActual + direcciones[direccionElegida][0];
    nuevaColumna = columnaActual + direcciones[direccionElegida][1];
}

void Avatar::mover(int nuevaFila, int nuevaColumna) {
    filaActual = nuevaFila;
    columnaActual = nuevaColumna;
    incrementarMovimientos();
}


void Avatar::reiniciar(int filaInicial, int columnaInicial) {
    filaActual = filaInicial;
    columnaActual = columnaInicial;
    movimientos = 0;
}
