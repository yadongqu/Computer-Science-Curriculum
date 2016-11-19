#include <stdio.h>

void br();
void ic();
int main(){
	br();
	printf(", ");
	ic();
	printf("\n");
	br();
	printf(",\n");
	ic();
	printf("\n");
	return 0;
}

void br(){
	printf("Brazil, Russia");
}

void ic(){
	printf("India, China");
}