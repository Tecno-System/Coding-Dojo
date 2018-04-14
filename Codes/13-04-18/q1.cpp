/*
Encontre a soma de todos os múltiplos de n abaixo de m.
○ n e m são números naturais (inteiros positivos)
○ m é excluído dos múltiplos

Exemplos:
	sumMul(2, 9) ==> 2 + 4 + 6 + 8 = 20
	sumMul(3, 13) ==> 3 + 6 + 9 + 12 = 30
	sumMul(4, 123) ==> 4 + 8 + 12 + ... = 1860
	sumMul(4, -7) ==> "INVALID"
*/
#include<stdio.h>

int main(){
	int n,m,cont=0,x, saida;
	do{
	saida = 1;
	printf("Digite n e o m\n");
	scanf("%d",&n);
	scanf("%d",&m);
		if(m<n){
			printf("invalido --- digite novamente\n");
			saida = 0;
		}
		if (n<0||m<0){
			saida =0;
		}
	}while (saida != 1);
		for (x=n; x<m; x++){
			if (x %n== 0){
				cont = cont + x;	
			}	
		}	
	
	printf("%d", cont);
	return 0;
}

