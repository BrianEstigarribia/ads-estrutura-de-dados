/* 6.	O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual 
   de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um algoritmo que leia 
   o c�digo, o nome e o pre�o de f�brica de 8 ve�culos; o percentual de lucro do distribuidor e 
   o percentual de impostos de cada ve�culo. Calcule e mostre:
   a.	O valor correspondente ao lucro do distribuidor;
   b.	O valor correspondente aos impostos;
   c.	O pre�o final de cada ve�culo.
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
   int codigo, i;
   char nome[50];
   float preco, perc_lucro, perc_imposto, vl_lucro, vl_imposto;
   
   for (i=1; i<=8; i++) {
       printf("Digite o codigo do veiculo %d \n", i);
       scanf("%d", &codigo);
       printf("Digite o nome do veiculo \n");
       scanf("%s", &nome);
       printf("Digite o preco do veiculo\n");
       scanf("%f", &preco);
       printf("Digite percentual de lucro\n");
       scanf("%f", &perc_lucro);
       printf("Digite percentual de impostos\n");
       scanf("%f", &perc_imposto);
    
       vl_lucro = (preco * (perc_lucro/100));
       vl_imposto = (preco * (perc_imposto/100));
       
       printf("O valor do lucro eh: %.2f\n", vl_lucro);
       printf("O valor do imposto eh: %.2f\n", vl_imposto);
       printf("O valor final do carro eh: %.2f\n", preco + vl_lucro + vl_imposto);

       system ("pause");
       
       }   
}
