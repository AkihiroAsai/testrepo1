#include <stdio.h>

typedef struct {
	unsigned short head;
	unsigned char mid;
	unsigned char tail;
} STest;

static STest S_test[2];

int main(void)
{
	unsigned char *p_test = (unsigned char *)&S_test;
	S_test[0].head = 12345;
	S_test[0].mid = 6;
	S_test[0].tail = 78;
	S_test[1].head = 222;
	S_test[1].mid = 33;
	S_test[1].tail = 44;

	for (int i=0; i<8; i++)
	{
		*(p_test + i) = i;
	}
	for (int i=0; i<2; i++)
	{
		printf("%u %u %u\n", S_test[i].head, S_test[i].mid, S_test[i].tail);
	}
	return 0;
}