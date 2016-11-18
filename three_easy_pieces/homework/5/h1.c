/*
Write a program that calls fork(). Before calling fork(), have the
main process access a variable (e.g., x) and set its value to something
(e.g., 100). What value is the variable in the child process?
What happens to the variable when both the child and parent change
the value of x?
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int n = 10;
	int rc = fork();
	if(rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc==0){
		n += 1;
		printf("I am child (pid: %d), the variable n is %d \n",
		 (int)getpid(), n);
	} else {
		n *= 100;
		printf("I am parent of %d (pid: %d), the variable n is %d \n", 
			rc, (int)getpid(), n);
	}

}