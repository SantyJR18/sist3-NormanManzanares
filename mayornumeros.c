void mayornumeros(){
    int arreglo[21], mayor=0;
    
    printf("Ingrese los 20 numeros para hallar el mayor \n");

    for(int i = 0; i<20; i++)
    {
        printf("%i", i);
        scanf("%d", &arreglo[i]);
    }
    for (int i = 0; i < 20; i++) 
    {
        if(arreglo[i]>mayor){
            mayor=arreglo[i];
        }
    }
    printf("el numero es mayor es: %i \n", mayor);
}
