#include <stdio.h>
#include <stdlib.h>

int v1,v2,v3;
int func(int a, int b) {
	if (!a) return 0;
	return a + b;
}

int func1(int c){
		if(c>3)
			return 0;
		else if (c>5)
			return 5;
		else if (c==0)
			return 0;
		else
			return 333;
				
}
int func2(int a,int b){
int c=5;
int mass[10];
switch(a){
	case 1:{
		if (b>c)
			return b;
		else
			return c;
	}
	case 2:{
		if (b>c)
			mass[5]=b;
		else
			mass[5]=c;
	}
default:{
	return -1;
}
}
}

int func3(int a)
{
int *f;
int i;
int zxc=func1(2);
i=func2(1,3);
i=func2(2,3);
i=func2(3,3);
f=(int*)malloc(a*sizeof(int));
for(i=0;i<a+2;i++)
	scanf("%d", &f[i]);
return f[a-1];
}

int main()
{
printf("\n Hello");
return 0;
}
