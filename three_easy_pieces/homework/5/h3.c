/*
Write another program using fork(). The child process should
print “hello”; the parent process should print “goodbye”. You should
try to ensure that the child process always prints first; can you do
this without calling wait() in the parent?
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int rc = fork();
	int status;
	printf("Pre-fork...\n");
	if(rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	}
	else if (rc == 0){
		printf("parent is %d\n", (int)getppid());
		printf("Hello!\n");
	} else {
		// the wait() system cal suspends execution of the
		// current process until one of its children terminates.
		wait(&status);
		printf("parent is %d\n", (int)getppid());
		printf("current pid is %d", (int)getpid());
		printf("Goodbye!\n");
	}
	return 0;
}

