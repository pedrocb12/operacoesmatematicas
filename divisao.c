#include <stdio.h>

int dividir(int dividendo, int divisor) {
    if (divisor == 0) {
        printf("Erro: divisão por zero.\n");
        return 0;
    }

    int sinal = 1;
    if (dividendo < 0) { dividendo = -dividendo; sinal = -sinal; }
    if (divisor < 0)   { divisor   = -divisor;   sinal = -sinal; }

    int quociente = 0;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        quociente++;
    }

    return quociente * sinal;
}

