/*
Sua tarefa é escrever uma função que retorne a soma das séries seguintes
até o enésimo termo (parâmetro).
Series: 1 + 1/4 + 1/7 + 1/10 + 1/13 + 1/16 +...

Exemplos:
	SeriesSum(1) => 1 = "1.00"
	SeriesSum(2) => 1 + 1/4 = "1.25"
	SeriesSum(5) => 1 + 1/4 + 1/7 + 1/10 + 1/13 = "1.57"
*/
#include <stdio.h>
main () {
float y=4,x=1,termos,acumu=1;
int i;
printf ("digite o numero de termos desejados\n");
scanf ("%f", &termos);
for (i =1; i< termos; i++)
{	
	
	acumu=acumu+ x/y;
	y= y+3;
}
	printf("%.2f",acumu);
	
}
