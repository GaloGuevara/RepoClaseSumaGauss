/*Construir un programa en lenguaje C que calcule la suma de Gauss a partir de un numero entero ingresado por el usuario.

Entregue la URL a su repositorio de GitHub. Debe evidenciar por lo menos 4 commits*/

#include <stdio.h>
int main()
{
    //Declaracion de variables
    int n;
    int num=0;

    //Ingreso del entero a iterar y confirmacion del valor ingresado
    printf("La suma de Gauss es una iteracion de la funcion 'i' hasta un valor 'n'.\nPor ejemplo para 'n=3' tenemos '1+2+3=6'\nCon esto en mente, por favor ingrese el valor de 'n' deseado: ");
    scanf("%d%*c", &n);
    printf("El valor de 'n' ingresado es: %d\n", n);
    
    //Condicional para que el valor sea positivo
    if(n>0)
    {
        //Bucle iterativo para realizar la suma
        for (int i = 1; i <= n; i++)//i++ significa que i aumenta en +1, tambien se pudo haber escrito como i+=1
        {
            num=num+i;//Se guarda el valor de la iteracion
            printf("La iteracion n=%d es igual a: %d\n", i, num);//Se muestra el valor iterado
        }
        printf("El resultado es igual a: %d", num);//Se muestra el resultado final
    } else {//En caso de no tener el valor correcto de n se muesta un mensaje de error
        printf("ERROR!!!\nEl valor de 'n' ingresado debe ser un entero mayor que cero");
    }
    return 0;    
}