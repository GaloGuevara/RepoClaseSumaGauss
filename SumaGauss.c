/*Construir un programa en lenguaje C que calcule la suma de Gauss a partir de un numero entero ingresado por el usuario.

Entregue la URL a su repositorio de GitHub. Debe evidenciar por lo menos 4 commits*/

#include <stdio.h>
int main()
{
    int n;
    int num=0;
    printf("La suma de Gauss es una iteracion de la funcion 'i' hasta un valor 'n'.\nPor ejemplo n=3 tenemos '1+2+3=6'\nIngrese el valor de n deseado: ");
    scanf("%d%*c", &n);
    printf("El valor de n ingresado es: %d\n", n);
    
    if(n>0)
    {
        for (int i = 1; i <= n; i++)
        {
            num=num+i;
            printf("La iteracion n=%d es igual a: %d\n", i, num);
        }
        printf("El resultado es igual a: %d", num);
    } else {
        printf("El valor de n ingresado debe ser mayor que cero");
    }
    return 0;    
}