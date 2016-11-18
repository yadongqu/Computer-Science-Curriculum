/*

Write a program that calls fork() and then calls some form of
exec() to run the program /bin/ls. See if you can try all of the
variants of exec(), including execl(), execle(), execlp(),
execv(), execvp(), and execvP(). Why do you think there
are so many variants of the same basic call?
 */

/*
from stackoverflow
http://stackoverflow.com/questions/5769734/what-are-the-different-versions-of-exec-used-for-in-c
The differences are combinations of:

L vs V: whether you want to pass the parameters to the exec'ed program as

L: individual parameters in the call (variable argument list): execl(), execle(), execlp(), and execlpe()
V: as an array of char* execv(), execve(), execvp(), and execvpe()
The array format is useful when the number of parameters that are to be sent to the exec'ed process are variable -- as in not known in advance, so you can't put in a fixed number of parameters in a function call.
E: The versions with an 'e' at the end let you additionally pass an array of char* that are a set of strings added to the spawned processes environment before the exec'ed program launches. Yet another way of passing parameters, really.
P: The versions with 'p' in there use the environment path variable to search for the executable file named to execute. The versions without the 'p' require an absolute or relative file path to be prepended to the filename of the executable if it is not in the current working directory.
 */



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int rc = fork();
	if( rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if (rc == 0){
		char *args[3];
		args[0] = "ls";
		args[1] = "-l";
		args[2] = NULL;
		execvp(args[0], args); 
		
	} else {
		wait(NULL);
	}
	return 0;
}