
#include <assert.h>
#include <stdio.h>
#include "multiplicar.c"
#include "divisao.c"



int main() {
<<<<<<< HEAD

=======
   
>>>>>>> e898ec5dc27894f9a4fffe4a3d243ef5c648a5e0
    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(-4, 5) == -20);

<<<<<<< HEAD
=======
   
>>>>>>> e898ec5dc27894f9a4fffe4a3d243ef5c648a5e0
    assert(dividir(10, 2) == 5);
    assert(dividir(-9, 3) == -3);

    printf("Todos os testes passaram!\n");
    return 0;
}
