#include <stdio.h>
#include <string.h>

unsigned replace_byte (unsigned x, int i, unsigned char b) {
	return (x & (~(0xFF << (i * 8)))) | (b << (i * 8));
}

int main()
{
    unsigned x = 0x12345678;
    int i = 0;
    char b = 0xAB;
    printf("%x\n", replace_byte(x, i, b));
}
