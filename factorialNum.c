void factorial(){
    int num, fac, r = 1;

    printf("Ingresa un numero para calcular su factorial:  \n");
    scanf("%d", &num);

    printf(" Calculando.... \n");
    fac=num;

    while (fac>0)
    {
        (fac==1); 
        r=r*fac;
        fac=fac-1;
    }
    printf("\n El resultado de factorial de %d es: %d \n", num, r);
}