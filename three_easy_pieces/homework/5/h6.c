/*
Write a slight modification of the previous program, this time using
waitpid() instead of wait(). When would waitpid() be
useful?
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int rc = fork();
	
	if(rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0){
		
		printf("childpid: %d\n",(int)getpid());
		printf("I am child, I am busy doing my homework.\n");
	} else {
	   int c = waitpid(-1, NULL, 0);
	   printf("waitpid returns %d\n", c);	
	}
	return 0;
}