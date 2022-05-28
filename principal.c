#include <stdio.h>
#include <stdlib.h>

#include "menu.c"

int menu();

int main(int argc, char const *argv[])
{
    int op;
    do{
        op = menu();
    }while (op!=4);

    return 0;
}
