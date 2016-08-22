#include <stdio.h>

int odd_ones(unsigned x);

int main(){

	printf("%d\n", odd_ones(0x1));
	printf("%d\n", odd_ones(0x11));

}

int odd_ones(unsigned x){
	x ^= x >> 16;
	x ^= x >> 8;
	x ^= x >> 4;
	x ^= x >> 2;
	x ^= x >> 1;

	return x & 1;
}