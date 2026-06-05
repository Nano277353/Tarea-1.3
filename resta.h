#include <stdio.h>

void restaNumeros() {
    int n1, n2;
    printf("Introduzca valor de primer numero: ");
    scanf("%d",&n1);

    printf("Introduzca el valor del segundo numero: ");
    scanf("%d",&n2);

    printf("El resultado de la resta es de: %d - %d = %d",n1, n2, (n1 - n2));

}
