#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char array[5];
	printf("\tarray = %p\n\t&array[0]=%p\n\t&array = %p\n"
		, array, &array[0], &array);
	system("pause");
	return 0;

}