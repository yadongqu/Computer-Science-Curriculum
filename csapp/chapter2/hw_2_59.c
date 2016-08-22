#include <stdio.h>

int main(){
	int x = 0x89abcdef;
	int y = 0x76543210;
	int z = (x & 0xff) | (y & ~0xff);
	printf("%x", z);
}
