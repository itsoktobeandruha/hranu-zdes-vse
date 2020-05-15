#include <stdio.h>
#include <Windows.h>

int main()
{
	printf("type your 4isla\n");
	int a,b=0;
	int c = 0;
	scanf_s("%d", &a);
	int* mass;
	int* mass1;
	mass = (int*)malloc(a * sizeof(int));
	printf("pishi 4isla\n");
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &mass[i]);
	}
	mass1 = (int*)calloc(a, sizeof(int));
	for (int i = 0; i < a; i++)
	{
		for (int n = 0; n < a; n++)
		{
			if (mass[i] == mass1[n])
			{
				b = b++;
			}
		}
		if (b == 0)
		{
			mass1[c] = mass[i];
			c = c++;
		}
	}
	mass1 = (int*)realloc(mass1, c*sizeof(int));
	printf("the result is\n");
	for (int i = 0; i < c; i++)
		printf("%d ", mass1[i]);
}