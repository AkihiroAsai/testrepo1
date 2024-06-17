#include <stdio.h>
#include <malloc.h>

#define MAX 0x8000

typedef struct {
	int it1;
	int it2;
	int it3;
	int it4;
} STest;

STest *getMem(int counts)
{
	unsigned short size;
	STest *p_test;
	
	size = sizeof(STest) * counts;
		printf("size:%u\n", size);

	if(size > MAX)
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
		p_test->it1 = 1;
		printf("! %u\n", p_test->it1);
	}
	else
	{
		printf("NG\n");
	}
	return 0;
}