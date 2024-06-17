#include <stdio.h>

typedef struct {
	unsigned short head;
	unsigned char mid;
	unsigned char tail;
} STest;

static STest S_test;

int main(void)
{
	STest *p_test = &S_test;
	S_test.head = 12345;
	S_test.mid = 6;
	S_test.tail = 78;
	printf("%u %u %u\n", p_test->head, p_test->mid, p_test->tail);
	return 0;
}