/***********************************************************
1 - Escreva uma fun��o recursiva que recebe como par�metros 
um n�mero real X e um inteiro N e retorna o valor de XN.
Obs.:N n�o pode ser negativo.

ex: recursividade 
Brian Estigarribia
***********************************************************/

#include <stdio.h>
#include <stdlib.h>

float Potencia(float x, int n)
{
  if (n == 0){
  	return (1.0);
  }else{
  	return (x * Potencia(x, n - 1));
  }
  
}

int main(){
	float val;
	val = Potencia(2.0,2);
	
	printf("%.2f\n",val);
	
	system("pause");
	return 0;
}
