#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//declare two string variables
	char *string, *found;
	//give a value to the string and print it
	string = strdup("UwU what's this?");
	printf("Original: %s\n", string);

	//loops thru, continiously separating at a space
	while( found = strsep(&string, " "))
	{
		printf("%s\n", found);	
	}
	free(found);

	return 0;
}
