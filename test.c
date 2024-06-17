#include <stdio.h>

static int sum(int x, int y)
{
	return(x + y);
}

int main(void)
{
	printf("Hello!\n");
	return sum(10, 2);
}