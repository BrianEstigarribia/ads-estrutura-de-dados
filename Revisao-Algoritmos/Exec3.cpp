/* 3.	Ler um n�mero inteiro N (s� aceitar valores positivos. 
Caso o N n�o seja positivo dever� ser lido um novo valor para o N) 
e escrever se � ou n�o um n�mero PRIMO.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
   int i, n, cont=0;
   printf("Digite um numero inteiro positivo\n");
   scanf("%d", &n);
   while (n < 0){
         printf("Digite um numero inteiro positivo\n");
         scanf("%d", &n);
         }
         
         
   for (i=1; i<=n; i++) {
       if (n % i ==0) 
          cont++;
       if (cont > 2)
          break;
          }
 
   if (cont <= 2)
      printf("O numero %d eh primo.\n", n);
   else
      printf("O numero %d nao eh primo.\n", n);
   
   system ("pause");
 }
