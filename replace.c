#include "replace.h"

void replace(char *input, char *output, char oldchar, char newchar)
{
	int j = 0;
	for(int i = 0; i < strlen(input); i++)
	{
		if(input[i] == oldchar)
		{
			output[j++] = newchar;
		}
		else
		{
			output[j++] = input[i];
		}
	}

	output[j] = '\0';
}
