#include<stdio.h>
#include<stdlib.h>

//describe: Verificador de maior numero.
//autor: GumblarZ < Jc0d3001@outlook.com >
//version: 0.1
//license: MIT License

int main(int argc, char const *argv[])
{
	int lance[] = {8,6,5,5,31,100,800,4,31,4,6};
	int maior = 0;

	for (int i = 0; i < 11; ++i)
	{
		if (lance[i] > maior)
		{
			maior = lance[i];
				
		}
	}
	
	printf("maior numero e %d",maior );
	return 0;
}