void promedio(){
   float suma=0, num=-1, resultado;
   int contador=-1;
   
   do
   {
      printf("Num: ");
      scanf("%f", &num);
      suma = suma + num;
      //suma+=num;  
      contador++;
   } while (num!=0);
   resultado = suma/contador;
   printf("El promedio de la suma es %.2f \n", resultado);
}

