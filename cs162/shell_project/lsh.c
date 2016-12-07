#include <stdio.h>

#define LSH_RL_BUFSIZE 1024;
#define LSH_TOK_BUFSIZE 64;
#define LSH_TOK_DELIM " \t\r\n\a"
char *lsh_read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	getline(&line, &bufsize, stdin);
	return line;
}

char **lsh_split_line(char *line)
{
	int bufsize = LSH_TOK_BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char*));
	char *token;

	if(!tokens){
		if (!tokens) {
	    fprintf(stderr, "lsh: allocation error\n");
	    exit(EXIT_FAILURE);
	  }
	}
	token = strtok(line, LSH_TOK_DELIM);
	while (token != NULL) {
    tokens[position] = token;
    position++;

    if (position >= bufsize) {
      bufsize += LSH_TOK_BUFSIZE;
      tokens = realloc(tokens, bufsize * sizeof(char*));
      if (!tokens) {
        fprintf(stderr, "lsh: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }

    token = strtok(NULL, LSH_TOK_DELIM);
  }
  tokens[position] = NULL;
  return tokens;
}


void lsh_loop(void)
{
	char *line;
	char **args;
	int status;
	do {
		printf("> ");
		line = lsh_read_line();
		args = lsh_split_line(line);
		status = lsh_execute(args);

		free(line);
		free(args);

	}while(status);
}

int main(int argc, char **argv){
	lsh_loop();
	return EXIT_SUCCESS;
}
