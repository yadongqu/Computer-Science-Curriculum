#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int lpipe[2], rpipe[2];
	int c1 = fork();
	int c2 = fork();
	if( c1 == 0){
		printf("child1: %d\n", (int)getpid());
	}else if( c2 == 0){
		printf("child2: %d\n", (int)getpid());
	}

	// if(c2 > 0){
	// 	printf("parent: %d\n", (int)getpid());
	// }
	// if(c1 > 0){
	// 	printf("parent: %d\n", (int)getpid());
	// }
	return 0;
}