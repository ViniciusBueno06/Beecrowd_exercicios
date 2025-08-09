#include<stdio.h>
#include<string.h>
#define TF 100
int main()
{
	int N, i, pos, j, k, flag, maior, posMaior;
	char vetS1[100][51], vetS2[100][51];
	
	scanf("%d", &N);
	while(N != 0)
	{
		getchar();
		for(i = 0; i < N; i++)
			gets(vetS1[i]);

		for(i = 0; i < N; i++)
		{
			j = 0;
			k = 0;
			flag = 0;
			while(j < strlen(vetS1[i]))
			{
				while(vetS1[i][j] == ' ')
				{
					if(flag == 1 && j < strlen(vetS1[i]))
					{
						vetS2[i][k] = vetS1[i][j];
						k++;
						flag = 0;
					}
					j++;
				}
					
				if(j < strlen(vetS1[i]))
				{
					vetS2[i][k] = vetS1[i][j];
					flag = 1;
					k++;
				}
				j++;
			}
			if (k > 0 && vetS2[i][k - 1] == ' ')
    			k--;
			vetS2[i][k] = '\0';
		}
					
		maior = 0;
		for(i = 0; i < N; i++)
		{
			if(strlen(vetS2[i]) > maior)
			{
				maior = strlen(vetS2[i]);
				posMaior = i;
			}
		}
		
		for(i = 0; i < N; i++)
		{
			if(i != posMaior)
			{
				k = strlen(vetS2[i]);
				for(j = maior; j >= 0; j--, k--)
				{
					if(k >= 0)
						vetS2[i][j] = vetS2[i][k];
					else
						vetS2[i][j] = ' ';
				}
			}
			printf("%s\n", vetS2[i]);
		
		}	
		scanf("%d", &N);
		if(N != 0)
			printf("\n");
	}
	return 0;
}