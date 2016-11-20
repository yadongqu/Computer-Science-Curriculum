#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	if(argc != 2){
		fprintf(stderr, "usage: ./wc filename \n");
		exit(1);
	}
    FILE *fp = fopen(argv[1], "r");
    if(!fp){
    	fprintf(stderr, "cannot open file.\n");
    	exit(1);
    }
    int lines = 0;
    int chars = 0;
    int word_begin = 0;
    int word_end = 0;
    int words = 0;
    int space = 0;
    while(!feof(fp)){
    	
    	char ch = fgetc(fp);
    	chars += 1;
    	if(ch == '\n')
    	{
    		lines++;
    	}
    	if(!isalpha(ch) && space == 0){
    		space = 1;
    	}
    	if(isalpha(ch) && space == 1){
    		words += 1;
    		space = 0;
    	}
    }
    printf("%d %d %d  %s\n", lines, words, chars, argv[1]);
    return 0;

}
