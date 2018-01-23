#include <stdio.h>
int calc(int x, int y)
{
        return x+y;
}
int main()
{
        printf("Hello World!\n");
        printf("Added new line\n");
        printf("Calc: 1 + 3 + 5= %d\n", calc(1,3)+5);
        printf("--PASSED--\n");
        return 0;
}
