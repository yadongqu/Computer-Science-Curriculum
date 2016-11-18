/*
Write a program that opens a file (with the open() system call)
and then calls fork() to create a new process. Can both the child
and parent access the file descriptor returned by open()? What
happens when they are writing to the file concurrently, i.e., at the
same time?
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int filedesc = open("testfile.txt", O_CREAT|O_WRONLY|O_APPEND);
	if(filedesc < 0){
		return 1;
	}
	int rc = fork();
	if(rc < 0){
		fprintf(stderr, "failed fork\n");
		exit(1);
	} else if (rc == 0){
		int x = write(filedesc, "A message from children\n", 40);
		printf("I am writing, %d", x);
	} else {
		int y = write(filedesc, "A message from parent.\n", 44);
		printf("I am writing, %d", y);

	}
	return 0;
}