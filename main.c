#include <stdio.h>

int main(){
    int sum, i, num, opc, sum2;
    
    do {
    printf("1. Suma de Gauss mediante formula\n");
    printf("2. Suma de Gauss mediante for\n");
    printf("3. Salir\n");
    printf("Escoja la opcion que desea\n");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1:
        printf ("Ingrese un numero entero\n");
        scanf("%d", &num);
         if (num < 0){
        printf("Ingrese un numero entero positivo\n");
            } else {
        sum= (num * (num + 1))/2;
        printf("La suma de Gauss del numero %d es: %d\n", num, sum);
        }
        break;
    case 2: 
        printf ("Ingrese un numero entero\n");
        scanf("%d", &num);
        for (i= 1; i <= num; i++){
        sum2 = sum2 + i;
        }
        printf("La suma de Gauss del numero %d es: %d\n", num, sum2);
    default:
        printf("La opcion ingresada no es correcta\n");
        break;
    }
    } while (opc != 3);
    
   
    
    
   
}