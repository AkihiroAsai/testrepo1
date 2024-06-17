#include <stdio.h>

#define SUM(x,y)	x+y		//CodeQL:not detect

int main(void)
{
	printf("sum:%d\n", SUM(SUM(2,6), 2));
	return 0;
}