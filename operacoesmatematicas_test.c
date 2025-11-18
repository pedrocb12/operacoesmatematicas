#include <assert.h>
#include "operacoesmatematicas.h"

int main() {
    
    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(5, -4) == -20);

    
    assert(dividir(10, 2) == 5);
    assert(dividir(9, 3) == 3);

    return 0;
}
