/*2. Implementar uma fun��o que receba como par�metro um vetor de n�meros reais (vet) 
de tamanho n e retorne quantos n�meros negativos est�o armazenados nesse vetor. 
Essa fun��o deve obedecer ao prot�tipo:

int negativos (int n, float *vet);
*/

#include <stdio.h>
#include <stdlib.h>

int negativos (int n, float* vet)
     {
     int i, neg=0;
     for (i=0; i< n; i++)
         {
          if (vet[i] < 0)
              neg++;     
          }
          return neg;

     }     

main()
  {       
  int n, i, neg;
  

  printf("Digite tamanho do vetor\n");
  scanf("%d",&n);
  float vet[n];
  for (i=0; i< n; i++)
      {
      printf("Digite um valor para o indice %d do vetor\n", i);
      scanf("%f",&vet[i]);
      }         

  neg = negativos(n, &vet[0]);

  printf("A quantidade de numeros negativos no vetor eh: %d\n", neg);
  system("pause");
  }
