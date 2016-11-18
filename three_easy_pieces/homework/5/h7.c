#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
	int rc = fork();
	if (rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if(rc == 0){
		close(STDOUT_FILENO);
		open("./h7.output", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
		printf("i am child,i want to print something.\n");


	} else {
		int wc = wait(NULL);
	}
	return 0;
}