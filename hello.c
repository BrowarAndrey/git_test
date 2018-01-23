#include <stdio.h>
int calc(int x, int y)
{
        return x+y;
}

int minus(int x, int y)
{
	return x-y;
}

int main()
{
        printf("Hello World!\n");
        printf("Added new line\n");
        printf("Calc: 1 + 3 + 5= %d\n", calc(1,3)+5);
	printf("Try to add new fuction to calc");
	printf("New features --> 10 - 2 = %d\n", minus(10,2));
        printf("-->PASSED\n");
        return 0;
}
