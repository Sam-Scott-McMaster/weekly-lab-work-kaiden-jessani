#include <stdio.h>
#include <stdlib.h>
int main ()
{
	double lines;
	double characters;
	if(scanf("%lf %lf", &lines, &characters) != 2)
	{
		fprintf(stderr, "Bad Value\n");
		return EXIT_FAILURE;
	}
	
	if(lines>0)
	{	
		double average_line_len = characters / lines;
		printf("%.1lf\n", average_line_len);
	}
	else
	{
		printf("No lines to Calculate");
	}
	return EXIT_SUCCESS;
}
