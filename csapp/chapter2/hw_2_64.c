#include <stdio.h>
/* Return 1 when any odd bit of x equals 1; 0 otherwise.
   Assume w=32. */
int any_odd_one(unsigned x);

int main(){
	printf("%d\n", any_odd_one(0x0));
	printf("%d\n", any_odd_one(0x1011));
}

int any_odd_one(unsigned x) {
	int y = 0x55555555;
	return (x & y) & 1;
}

