#include <stdio.h>
#include <stdlib.h>

#include "factorialNum.c"
#include "promedio.c"
#include "mayornumeros.c"


int menu(){
    int op;
    system("cls");
    printf("\t---------- M E N U ---------- \n");
    printf(" 1. Calcular Factorial de un numero \n ");
    printf("2. Calcular Promedio \n ");
    printf("3. MayorN Numeros \n ");
    printf("4. Salir \n");
    printf("Opcion: ");
    scanf("%i", &op);
    switch (op)
    {
    case 1:
        system("cls");
        printf("Bienvenido al Factorial de un Numero\n");
        factorial();
        system("pause");
        break;

    case 2:
        system("cls");
        printf("Bienvenido a Calcular Promedio\n");
        printf("Digita los numeros que quieras para calcular su promedio y con 0 se acaba \n");
        promedio();
        system("pause");
        break;

    case 3:
        system("cls");
        printf("Bienvenido a mayornNumeros \n");
        mayornumeros();
        system("pause");
        break;
    
    case 4:
       system("cls");
       printf("Nos vemos pronto..... \n");

    default:
        printf("opcion invalida \n");
        break;
    }
    return op;
}