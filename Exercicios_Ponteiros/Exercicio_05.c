/* 5.	Implementar uma fun��o que calcule m�dia aritm�tica de 3 valores. 
Essa fun��o deve obedecer ao prot�tipo:

void media_arit (float a, float b, float c, float *media); */

#include <stdio.h>
#include <stdlib.h>

void media_arit(float a, float b, float c, float* media)
     {
     *media = (a+b+c)/3;
     }     


main()
  {       
  float a,b,c,media;
  printf("Informe o primeiro valor\n");
  scanf("%f",&a);
  printf("Informe  o segundo valor\n");
  scanf("%f",&b);
  printf("Informe o terceiro valor\n");
  scanf("%f",&c);
  
  media_arit(a, b, c, &media);

  printf("A media aritmetica eh = %f\n", media);
  system("pause");
  }
