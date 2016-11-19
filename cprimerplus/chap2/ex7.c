#include <stdio.h>
int main(){
	int row = 3;
	while(row > 0){
		for(int i = 0; i < row; i++){
			printf("Smile!");
		}
		printf("\n");
		row -= 1;
	}
	return 0;
}