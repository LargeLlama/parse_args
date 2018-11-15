#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ** parse_args( char * line )
{
	//allocate up to 6 arguments because that's the maximum # allowed
	char ** args = calloc(6, sizeof(line));
	//copy the line into another string as to not modify it
	char * string = strdup(line);

	//loop thru the string, appending each argument
	//to the array
	int i = 0;
	while(args[i] = strsep(&string, " "))			
	{
		i++;
	}

	//return it
	return args;
}


int main()
{

	printf("TESTING 'ls -a -l'\n");
	char ** args = parse_args("ls -a -l");
	execvp(args[0], args);

	return 0;
}
