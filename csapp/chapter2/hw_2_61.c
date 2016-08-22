#include <stdio.h>
int any_bit_of_1(int x);
int any_bit_of_0(int x);
int any_bit_of_lsb_1(int x);
int any_bit_of_msb_0(int x);


int main (){
	int no_1 = 0x0;
	int have_1 = 0x01;
	int no_0 = 0xffffffff;
	int have_0 = 0xf0f0;
	int lsb_no_1 = 0xff00;
	int lsb_have_1 = 0x10;
	int msb_no_0 = 0xff000000;
	int msb_have_0 = 0xff;

	if (any_bit_of_1(no_1) == 0){
		printf("%d have no bit equals 1.\n", no_1);
	}else {
		printf("your logic is wrong.\n");
	}

	if (any_bit_of_1(have_1) == 1){
		printf("%d have bit equals 1.\n", have_1);
	}else {
		printf("your logic is wrong.");
	}

	if (any_bit_of_0(no_0) == 0){
		printf("%u have no bit equals 0.\n", no_0);
	}else {
		printf("your logic is wrong.");
	}

	if (any_bit_of_0(have_0) == 1){
		printf("%d have bit equals 0.\n", have_0);
	}else {
		printf("your logic is wrong.");
	}

	if (any_bit_of_lsb_1(lsb_no_1) == 0){
		printf("%d have no bit equals 1.\n", lsb_no_1);
	}else {
		printf("your logic is wrong.");
	}
	if (any_bit_of_lsb_1(lsb_have_1) == 1){
		printf("%d have bit equals 1.\n", lsb_have_1);
	}else {
		printf("your logic is wrong.");
	}
	if (any_bit_of_msb_0(msb_no_0) == 0){
		printf("%u have no bit equals 0.\n", msb_no_0);
	}else {
		printf("your logic is wrong.");
	}
	if (any_bit_of_1(msb_have_0) == 1){
		printf("%d have bit equals 1.\n", msb_have_0);
	}else {
		printf("your logic is wrong.");
	}

}


int any_bit_of_1(int x){
	if ( (x ^ 0) == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int any_bit_of_0(int x) {
	if ( (x ^ 0xffffffff) == 0){
		return 0;
	}else{
		return 1;
	}
}
int any_bit_of_lsb_1(int x) {
	if (((x & 0xff) ^ 0) == 0){
		return 0;
	}
	else {
		return 1;
	}
}

int any_bit_of_msb_0(int x) {
	if (((x & 0xff000000) ^ 0xff000000) == 0){
		return 0;
	} else {
		return 1;
	}
}

