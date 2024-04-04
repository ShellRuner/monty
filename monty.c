#include "monty.h"
#include <fcntl.h>
#include <unistd.h>
#define MAX_STR 100

/**
 *
 */
int main(int argc, char* argv[])
{
	unsigned int line_number = 0, num_str = 0;
	int fp;
	char *buffer;
	ssize_t bytes_read;

	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall}
	};
	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp = -1)
	{
		perror("Error:Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	buffer = malloc(LENGTH_MAX_LINE);
	//error handling
	while ((bytes_read = read(fd, &buffer, LENGTH_MAX_LINE)) > 0)
	{
		line_number++;
		/*Tokenize the elements in the line*/
		char *token = strtok(buffer, " \n");
		while (token != NULL)
		{
			//performe operation
			char *str[MAX_STR];
			strcpy(str[num_str],token);
			num_str++;
			for (i = 0; i)	
			token = strtok(NULL, " \n");
		}
	}

	//read error handling
	if (bytes_read == -1)
	{
		//error handling
	}

	close(fp)
}
