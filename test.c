#include "replace.h"

int main()
{
	char input[] = "This_string_now_has_spaces!";
	char output[256];

	replace(input, output, '_', ' ');
	printf("%s\n", output);

	return 0;
}

