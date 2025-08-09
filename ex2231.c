#include<stdio.h>

int main()
{
	int N, M, vetTemp[10000], i, j, maior, menor, flag, soma, teste = 1;
	float media;
	
	scanf("%d %d", &N, &M);
	while(M != 0 && N != 0)
	{
		flag = 0;
		for(i = 0; i < N; i++)
			scanf("%d", &vetTemp[i]);
		
		for(i = 0; i <= N - M; i++)
		{
			soma = 0;
			for(j = i; j < i + M; j++)
				soma += vetTemp[j];
			
			media = soma / M;
			
			if(flag == 0)
			{
				menor = maior = media;
				flag = 1;
			}	
			else
			{
				if(media > maior)
					maior = media;
				if(media < menor)
					menor = media;
			}
		}
		printf("Teste %d\n", teste);
		printf("%d %d\n", menor, maior);
		printf("\n");
		teste++;	
		
		scanf("%d %d", &N, &M);
	}
	
	return 0;
}