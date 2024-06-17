#include <stdio.h>

typedef struct {
	unsigned short head;
	unsigned char mid;
	unsigned char tail;
} STest;

static STest S_test;

int main(void)
{
	unsigned char *p_test = (unsigned char *)&S_test;
	S_test.head = 12345;
	S_test.mid = 6;
	S_test.tail = 78;

	*p_test = 1;
	*(++p_test) = 2;
	*(++p_test) = 3;
	*(++p_test) = 4;
	printf("%u %u %u\n", S_test.head, S_test.mid, S_test.tail);
	return 0;
}