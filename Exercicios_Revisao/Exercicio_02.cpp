/* 2.Fa�a um algoritmo que leia o valor do sal�rio de 35 funcion�rios e o valor do sal�rio m�nimo. 
  Calcule e mostre a quantidade de sal�rios m�nimos que cada funcion�rio ganha. */

#include <stdio.h>
#include <stdlib.h>

main()
{
   int i, qtde;
   float sal, sal_min, qtd;
   for (i=1; i<=35; i++) {
       printf("Digite o salario do funcionario\n");
       scanf("%f", &sal);
       printf("Digite o valor do salario minimo\n");
       scanf("%f", &sal_min);
       qtd = sal/sal_min;
       qtde = qtd;
       printf ("O funcionario recebe %d salario(s) minimo(s)\n", qtde);
       system ("pause");

       }   
      
}
