#include <stdio.h>

// Declaramos la función que vamos a testear
int sumar(int a, int b);

int main() {
    int errores = 0;

    printf("=== INICIANDO PRUEBAS UNITARIAS ===\n");

    if (sumar(5, 3) == 8) {
        printf("[OK] Test 1: 5 + 3 es igual a 8\n");
    } else {
        printf("[FALLO] Test 1: 5 + 3 no dio 8\n");
        errores++;  
    }

    if (sumar(-2, -3) == -5) {
        printf("[OK] Test 2: -2 + -3 es igual a -5\n");
    } else {
        printf("[FALLO] Test 2: -2 + -3 no dio -5\n");
        errores++;
    }

    printf("===================================\n");
    
    if (errores > 0) {
        printf("Resultado: %d test(s) fallaron.\n", errores);
        return 1; 
    }

    printf("Resultado: Todos los tests pasaron exitosamente.\n");
    return 0;
}
