/*
Escrever função distinta que remove números duplicados de um array. A ordem da sequência precisa permanecer
a mesma.

Exemplo:
	[1,1,2,3,3,4,5,5] => [1,2,3,4,5]
	[12,20,20,31,40,40] => [12,20,31,40]
*/

#include<stdio.h>

main()
{
	int n,i, num,y,k=0;
	printf("informe a quantidade de numeros:\n");
	scanf("%d", &n);
	printf("informe os elementos do array:\n");
	int vet[n], vet2[n];
	for(i=0;i<n;i++)
	{
		scanf("%d", &vet[i]);
	}
	printf("\n");
	printf("O vetor sem repeticao e:\n");
	for(i=0;i<n;i++)
	{
		for (y=i+1;y<n;y++)
		{
			if(vet[i]==vet[y])
			{
				for(k=y;k<n-1;k++){
					vet[k]=vet[k+1];
				}
				n -= 1;
			}
		}	
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",vet[i]);
}
}
