/***********************************************************
3 - O que a seguinte fun��o faz?

int funcao(int a, int b)
{
if (b == 1)
return a;
else
return a + funcao(a, b-1);
}

ex: recursividade 
Brian Estigarribia
***********************************************************/

#include <stdlib.h>
#include <stdio.h>

/* 
fun��o que realiza a soma do valor de a + a, enquanto decrementa o valor de b, at� chegar a 1, resutando em um valor 
semelhante a uma multiplica��o de a por b.
*/
int funcao(int a, int b)
{
	if (b == 1)  
	return a;
	else
	return a + funcao(a, b-1);
}

int main (void)
{
	printf("%d", funcao(3,10));
	system("pause");
}
