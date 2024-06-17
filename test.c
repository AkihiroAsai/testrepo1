#include <stdio.h>

#define SUM(x,y)	x+y

int main(void)
{
	printf("sum:%d\n", SUM(SUM(2,6), 2));
	return 0;
}