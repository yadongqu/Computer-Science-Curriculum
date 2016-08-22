#include <stdio.h>

#define w sizeof(int) << 3

unsigned srl(unsigned x, int k);
int sra(int x , int k);



int main() {
	int x1 = 0xffffff00;
	int x2 = 0xf0f;
	unsigned y1 = 0xffffff00;
	unsigned y2 = 0xf0f;

	printf("%x >> 2 = %x\n", x1, sra(x1, 2));
	printf("%x >> 2 = %x\n", x2, sra(x2, 2));
	printf("%x >> 2 = %x\n", y1, srl(y1, 2));
	printf("%x >> 2 = %x\n", y2, srl(y2, 2));

 }

 unsigned srl(unsigned x, int k) {
	/* Performs shift arithmetically */
	unsigned xsra = (int) x >> k;

	/* First masking bits constructor */
	unsigned mask = (unsigned) ~0 >> k;

	return xsra & mask;
}

int sra(int x, int k) {
	/* Performs shift logically */
	        int xsrl = (unsigned) x >> k;

        int sign = ((1 << (w - 1 - k)) & xsrl) << 1;
        int t = ~((1 << (w - k)) - 1); 
        /* t=[11...1100...00], w-1...w-k 位全 1 */
       
        /*
         * sign = 0, n = 0
         * sign = [0...010...0], n = t
         */
        int n = t + (sign ^ (1 << (w - k)));

        return n + xsrl;
}