 /*  Programa que despliega la serie de Fibonacci del numero que teclee el usuario 
 Autores:
 
 
 */


#include <stdio.h>         /*Declaración de las bibliotecas*/



int main(){

   int fibonacci,n,cont;      /*Declaración de las variables*/

   int val1 = 0;              /*Inicialización de las variables*/

   int val2 = 1;

   printf("Ingresa el numero que quieres obtener de la serie de fibonacci");

   scanf("%d",&n);

   for(cont=0;cont<n;cont++){

             fibonacci = val1 + val2;

             printf("%d\n",fibonacci);

             val1 = val2;

             val2 = fibonacci;

   }

   return 0;
   //comit de prueba
}
