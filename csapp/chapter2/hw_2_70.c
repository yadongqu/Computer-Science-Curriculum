#include <stdio.h>

int fits_bits(int x, int n);

int main(){
	printf("%d\n", fits_bits(5,4));
	printf("%d\n", fits_bits(-254,4));

}

int fits_bits(int x, int n){
	int mask = x >> 31;
	printf("%d\n", mask);
	printf("~x & mask = %d\n", ~x & mask);
	printf("x & ~mask = %d\n", x & ~mask);
	return !(((~x & mask) + (x & ~mask)) >> (n + ~0));
}