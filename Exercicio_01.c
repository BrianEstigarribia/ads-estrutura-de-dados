/*1.	Implementar uma fun��o que calcule a �rea da 
superf�cie e volume de uma esfera de raio r. Essa fun��o deve obedecer ao prot�tipo:

void calc_esfera (float r, float* �rea, float* volume);
�rea = 4r2
Volume = 4r3/3 */


#include <stdio.h>
#include <stdlib.h>

void calc_esfera (float r, float* area, float* volume)
    {
     *area=4*r*r;
     *volume=(4*(r*r*r))/3;
    }     

main()
  {       
  float r;
  float area,volume;

  printf("Digite o valor raio r \n");
  scanf("%f",&r);

  calc_esfera(r, &area, &volume);

  printf("A area eh = %f\nO volume eh = %f \n", area, volume);
  system("pause");
  }
