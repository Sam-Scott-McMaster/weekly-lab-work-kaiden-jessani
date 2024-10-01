#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(strcmp(argv[0], "./quiz") == 0)
	{
			if(strcmp(argv[1], "-1") == 0)
			{
					puts("Question 1: What is the command to compile a C program, while also storing it as a 'shortcut' for running it in the future? Assume the name of the file is File1.c, and I want to store it in the shortcut File1");
					if(argc>2)
					{
							if(strcmp(argv[2], "gcc -o File1 File1.c")  == 0)
							{
									puts("You answered correctly! ");
							}
							else
							{
								puts("You answered incorrectly. ");
							}
					}
					return EXIT_SUCCESS;
			}
			else if(strcmp(argv[1], "-2") == 0)
			{

					puts("Question 2: What command prints out all the contents in a directory");
					if(argc>2)
					{
							if(strcmp(argv[2], "ls") == 0)
							{
									puts("You answered correctly! ");

							}
							else
							{
								puts("You answered incorrectly. ");
							}
					}
					return EXIT_SUCCESS;
			}
			else if(strcmp(argv[1], "-3") == 0)
			{

					puts("Question 3: What does every script file have to start with? ");
					if(argc>2)
					{
							if(strcmp(argv[2], "#!/bin/bash") == 0)
							{
									puts("You answered correctly! ");

							}
							else
							{
								puts("You answered incorrectly. ");
							}
					}
					return EXIT_SUCCESS;
			}
			else if (strcmp(argv[1], "--help") == 0)
			{
				puts("Usage: quiz [-#] [<answer>]");
				puts("Asks a question to the user relating to C, Git, or Linux, and it checks the answer provided by the user. ");
				puts("With no <answer>, prints question to standard output");

				puts("-1			displays Question 1");
				puts("-2			displays Question 2");
				puts("-3			displays Question 3");

				puts("Examples:");
				puts("  quiz -1 'my_answer'    Outputs the result of the answer provided, checks if it is correct. ");
				puts("  quiz -3    Prints out Question 3 to Standard Output");
				return EXIT_SUCCESS;
			}
			else
			{
				puts("Usage: quiz [-#] [<answer>]");
				puts("Try 'quiz --help' for more information. ");
				return EXIT_FAILURE;
			}
	}
	else
	{
		puts("Usage: quiz [-#] [<answer]");
		puts("Try 'quiz --help' for more information. ");
		return EXIT_FAILURE;
	}
}
