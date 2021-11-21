#include<stdio.h>
#include<stdlib.h>
void staticArrayInit(void);
void automaticArrayInit(void);


int main(void)
{
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit(void)
{
	static int array[3];
	int i;

	printf("\nValues on entering staticArrayInt:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d\t", i, array[i]);
	printf("\nValues on exiting staticArrayInit:\n");
	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d\t", i, array[i]+=5);




}
void automaticArrayInit(void)
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues on entering autimaticArrayInit:\n");
	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d\t", i, array2[i]);
	printf("\n\nValues on exiting autimaticArrayInit:\n");
	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d\t", i, array2[i] += 5);
}
