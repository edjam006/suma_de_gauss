#include <stdio.h>

int main(void){
    int sum, i, num;
    printf ("Ingrese un numero entero\n");
    scanf("%d", &num);
    if (num < 0){
        printf("Ingrese un numero entero positivo\n");
    } else {
        sum= (num * (num + 1))/2;
        printf("La suma de Gauss del numero %d es: %d", num, sum);
    }

}