#include <stdio.h>
#include <Windows.h>

int main()
{
	int a;
	int b;
	int c;
	int num1;
	int* xd;
	int* lol;
	int d = 0;
	int f;
	printf("Press ESC to stop\n");
	while (d != 27)
	{
		num1 = 0;
		b = 1;
		a = 0;
		f = 0;
		d = getche();
		if (d == 27)
			break;
		xd = (int*)malloc(100 * sizeof(int));
		if (d > 47 && d < 58)
		{
			for (int i = 1; a != 32; i++) //������� ����� � ������ [1]=2 [2]=3 [3]=4;
			{
				if (f < 1)
					a = d;
				else
					a = getche();
				if (a == 32)
					continue;
				c = a;
				if (a >= 48 && a <= 57)
				{
					a -= 48;
				}
				xd[i] = a;
				xd[i + 1] = 666;
				f = f + 1;
			}
			int n = 1;
			for (int i = 1; xd[i] != 666; i++)
			{
				if (xd[i] != 666)
					n = n * 10;
			}
			n = n / 10; // ���������� ���������� ��������� 
			for (int i = 1; xd[i] != 666; i++)
			{
				num1 = num1 + (xd[i] * n);
				n = n / 10;
			} // ������� �����
			lol = (int*)malloc(100 * sizeof(int)); //������� �����
			for (int i = 1; i < 2; i++)
			{
				lol[i] = num1 * num1;
				printf("%d\n", lol[i]);//����� �����
			}
			free(xd);
			free(lol);
		}
	}
	system("pause");
}