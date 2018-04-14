/*
Verifique se uma string tem a mesma quantidade de 'x's e' o's. O método
deve retornar um booleano e não fazer distinção entre maiúsculas e
minúsculas. A string pode conter qualquer caractere.

Exemplo:
	XO("ooxx") => true
	XO("xooxx") => false
	XO("ooxXm") => true
	XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
	XO("zzoo") => false
*/

#include <stdio.h>
#include <string.h>

main()
{
	
	int x=0,o=0;
	int cont=0,i,n;
	
	printf("Informe o tamanho do vetor:\n");
	scanf("%d", &n);
	char a[n];
	printf("\n Informe a string:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
		
		if(a[i]=='x')
		{
			x++;
		}
		else {
			if(a[i]=='o'){
				o++;
			}
		}
	}
	if(x==o){
		printf("True");
	}
	else{
		printf("False");
	}
}
