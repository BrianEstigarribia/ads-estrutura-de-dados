/*1.	Fa�a um algoritmo que leia 22 n�meros inteiros positivos maiores 
que zero. A cada n�mero informado calcule e mostre:
a.	O n�mero digitado;
b.	A metade do n�mero digitado;
c.	O dobro do n�mero digitado;
d.	O n�mero digitado ao cubo. */

#include <stdio.h>
#include <stdlib.h>

main()
{
   int i, num;
   for (i=1; i<=22; i++) {
       printf("Digite um numero inteiro\n");
       scanf("%d", &num);
       if (num >= 0) {
          printf("O numero eh %d\n", num);
          printf("A metade do numero eh %.2f\n", num/2.0);
          printf("O dobro do numero eh %d\n", num*2);
          printf("O numero ao cubo eh %d\n", num*num*num);
          }
       else {
            printf("Numero invalido");
            i--;
            }
 
       }   
      
      }
