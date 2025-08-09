#include<stdio.h>
#include<string.h>
#define TF 50
int main()
{
	int N, i, j, cont, result, pos;
	char vet[TF][40];

	while(scanf("%d", &N) != EOF)
	{
		getchar();
		for(i = 0; i < N; i++)
		{
			gets(vet[i]);
			strcat(vet[i], " ");
		}
		
		for(i = 0; i < N; i++)
		{
			pos = 0;
			while(vet[i][pos] != ' ')
				pos++;
				
			j = 0;
			cont = 0;	
			if(pos == 1)
			{
				while(j < strlen(vet[i]))
				{
					if(vet[i][j] == ' ')
						cont++;
					j++;
				}
				result = (cont * 3 - 2) + 96;
				printf("%c\n", result);			
			}
			else
				if(pos == 2)
				{
					while(j < strlen(vet[i]))
					{
						if(vet[i][j] == ' ')
							cont++;
						j++;
					}		
					result = (cont * 3 - 1) + 96;
					printf("%c\n", result);
				}
				else
				{
					while(j < strlen(vet[i]))
					{
						if(vet[i][j] == ' ')
							cont++;
						j++;
					}		
					result = (cont * 3) + 96;
					printf("%c\n", result);
				}
		}		
	}
	return 0;
}