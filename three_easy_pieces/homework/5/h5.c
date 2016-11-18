/*
 Now write a program that uses wait() to wait for the child process
to finish in the parent. What does wait() return? What happens if
you use wait() in the child?
 */

/*
in the parent process
wait returns the pid of terminated child process
in the child process
wait returns -1;
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
		
		int c = wait(NULL);
		printf("childpid: %d\n",(int)getpid());
		printf("child: wait returns %d\n", c);
		printf("I am child, I am busy doing my homework.\n");
	} else {
		// int w = wait(NULL);
		// printf("parent: wait returns %d\n", w);
		printf("parent: I am just doing... nothing.\n");
	}
	return 0;
}