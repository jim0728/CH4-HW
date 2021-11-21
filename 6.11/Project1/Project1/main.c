#include<stdio.h>
#include<stdlib.h>
void  main()
{
	int i, j, tmp,k,swap ;
	int a[9] = {26 ,5 ,81 ,7 ,63,45,32,1,23 };
	k = 8;
	swap = 1; 
	for (i = 0; i < 8 && swap == 1; i++)
	{
		swap = 0;
		for (j = 0; j < k; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swap = 1;
			}
			
		}
		k = k - 1;
		if (swap == 0)
		{
			break;
		}
		printf("loop %d :", i);
		for (j = 0; j < 9; j++)
			printf("%4d", a[j]);
		printf("\n");
	}
	system("pause");
}