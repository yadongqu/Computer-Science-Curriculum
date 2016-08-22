#include <stdio.h>
int lower_one_mask(int n);

int main(){

	printf("%x\n", lower_one_mask(6));
	printf("%x\n", lower_one_mask(17));

}

int lower_one_mask(int n){
	int r = 0;
	int s = n - 1;
	r = (1 << s) - 1 + (1 << s);

	return r;
}