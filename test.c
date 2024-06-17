#include <stdio.h>
#include <malloc.h>

typedef struct {
	int it1;
	int it2;
	int it3;
	int it4;
} STest;

STest *getMem(int counts)
{
	unsigned short size = sizeof(STest) * counts;
	STest *p_test;
	if(size > 0x8000)
	{
		p_test = NULL;
	}
	else
	{
		p_test = malloc(size);
	}
	return(p_test);
}

int main(void)
{
	STest *p_test = getMem(4096);
	if(p_test)
	{
		printf("!\n");
	}
	else
	{
		printf("NG\n");
	}
	return 0;
}