#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int val;
	for (int i = 1; i < argc; i++) {
		val =(int)strtol(argv[i], NULL, 16);
		printf("0x%x =   %d\n", val, val);
	}
}
