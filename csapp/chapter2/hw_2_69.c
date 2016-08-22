#include <stdio.h>

unsigned rotate_left(unsigned x, int n);

int main(){
	printf("n = %d -> 0x%x\n", 4, rotate_left(0x12345678, 4));
	printf("n = %d -> 0x%x\n", 20, rotate_left(0x12345678, 20));

}

unsigned rotate_left(unsigned x, int n){
	int w = sizeof(int) << 3;
	return ((x >> (w-n-1)) >> 1) + (x << n);
}