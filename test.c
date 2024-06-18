#include <stdio.h>
#include <string.h>

void printWrapper(char *string) {

printf(string);
}

int main(int argc, char **argv) {

char buf[5012];
memcpy(buf, argv[1], 5012);
printWrapper(argv[1]);
return (0);
}

int main_1(int argc, char **argv) {
char *items[] = {"boat", "car", "truck", "train"};
int index = argv[1];
printf("You selected %s¥n", items[index-1]);
}
