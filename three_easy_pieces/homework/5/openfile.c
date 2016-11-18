/*
Note: 
The file descriptor table is copied, 
but individual file descriptors are shared. 
This means, for example, that a file opened 
in the child is not available in the parent. 
(Opening a new file adds a new file descriptor
 to the file descriptor table, and file descriptor
  tables are not shared between parent and child.) 
  However, if the parent opens a file f and then 
  forks, both the parent and child will have access 
  o that open f file. Furthermore, the parent and the 
  hild truly share f: if one of them reads 10 bytes 
  from the file, the other one sees the file pointer 
  jump ahead by 10.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	char data[4];
	int filedesc = open("testfile.txt", O_RDONLY);
	int rc = fork();
	if(rc < 0){
		fprintf(stderr, "fork failed\n");
		exit(1);
	} else if(rc == 0){
		printf("I am children %d\n", (int)getpid());
		int r = read(filedesc, data, 2);
		if(r < 0){
			fprintf(stderr, "read failed");
		     exit(1);
		}
		printf("%s\n", data);
	} else {
		printf("I am parent %d\n", (int)getpid());
		int r = read(filedesc, data, 4);
		if(r < 0){
			fprintf(stderr, "read failed");
		     exit(1);
		}
		printf("%s\n", data);
	}
}