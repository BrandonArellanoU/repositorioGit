/*Construya un programa para generar los numeroTerminos primeros términos de la serie de Fibonacci (desde el valor 0) y su respectiva suma, donde numeroTerminos, 
pertenece a los enteros positivos y es ingresado por el usuario.*/
/*Por Brandon Arellano estudiante de la carrera de Ingenieria de Software*/

//Abrir biblioteca
#include<stdio.h>

//abrir la funcion main
int main(int argc, char const *argv[])
{
    //inicializacion de las variables
    int numeroTerminos, a = 0, b = 1, suma = 0, iterador, pivote;

    //usamos la funcion printf para mostrar en pantalla el mensaje
    printf("Ingrese el numero de terminos ah ingresar");

    //leemos lo que ingresa por teclado el usuario con la funcion scanf
    scanf("%d", numeroTerminos);

    //utilizamos un for para la suma de la cantidad de terminos
    for(iterador = 1; iterador < numeroTerminos; iterador++) {
        // Imprimir el numero
        printf("%d ", b);
        
        // Actualizar la suma con el término actual
        suma += b;
        
        // Calcular el pivote término de la serie
        pivote = a + b;
        a = b;
        b = pivote;
    }
    //imprime los la serie de fibonacci y la suma de los terminos
    printf("\nLa suma de los primeros %d términos de la serie de Fibonacci es: %d numeroTerminos", numeroTerminos, suma);

    return 0;
}

