#include <stdio.h>

// Función que queremos probar
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado_test = sumar(5, 3);

    printf("Hola UTP\nResultado de la suma: %d\n", resultado_test);
    return 0; // Éxito
}
