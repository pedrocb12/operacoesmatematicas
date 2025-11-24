


int multiplicar(int a, int b) {
    int resultado = 0;
    int sinal = 1;

    if (a < 0) { a = -a; sinal = -sinal; }
    if (b < 0) { b = -b; sinal = -sinal; }

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    return resultado * sinal;
}


#include <stdio.h>

int multiplicar(int a, int b) {
    return a * b;
}


