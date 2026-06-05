#include <stdio.h>

void divisionNumeros() {
    int n1, n2;
    float result;

    printf("Introduzca el valor del primer numero: ");
    scanf("%d", &n1);

    printf("Introduzca el valor del segundo numero: ");
    scanf("%d", &n2);

    if (n2 != 0) {
        result = (float)n1 / n2;
        printf("El resultado de la division es: %d / %d = %.2f\n", n1, n2, result);
    } else {
        printf("Error: No se puede dividir entre cero.\n");
    }
}
