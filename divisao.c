#include <stdio.h>

int main() {
    int dividendo, divisor, quociente = 0;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    if (divisor <= 0) {
        printf("Divisor deve ser maior que zero.\n");
        return 1;
    }

    int resto = dividendo;
    while (resto >= divisor) {
        quociente++;
        resto -= divisor;
    }

    printf("Quociente: %d\nResto: %d\n", quociente, resto);
    return 0;
}
