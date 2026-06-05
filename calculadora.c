#include "suma.h"
#include "resta.h"
#include "multiplicacion.h"
#include "division.h"

int main () {
    int opc = 1;

    printf("====CALCULADODRA====\n" "Seleccione su opcion: \n" "1.Suma\n" "2.Resta\n" "3.Multiplicacion\n" "4.Division\n");
    scanf("%d", &opc);

    switch(opc) {
    case 1: sumaNumeros();
    break;
    case 2: restaNumeros();
    break;
    case 3: multiplicacionNumeros();
    break;
    case 4: divisionNumeros();
    break;
    }


    return 0;
}
