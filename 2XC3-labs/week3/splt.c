#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
	char *value[1024];
	while (true)
	{
        	int result = scanf("%1023s", &value);
		if(result == 0)
		{
			fprintf(stderr, "Bad Value\n");
			return EXIT_FAILURE;
		}
		else if (result == EOF)
		{

        		break;
		}
        	printf("%s\n", value);
	}
	return EXIT_SUCCESS;
}
