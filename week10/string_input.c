#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Reads a line of input into *s up to length n 
 * Returns number of characters read.
 * Make sure that *s is 1 bigger than n!
 */
int readline(char s[], int n) {
    int ch, i=0;
    while ((ch = getchar()) != '\n') {
      s[i++] = ch;
      if (i == n)
        break;
	}
	
    s[i] = '\0';
    return n;
}

/* Reads a line of input and returns a pointer to it.
 * Maximum length is hard coded at 10000.
 */
char *readline2() {
    char *s = malloc(10001);
    int ch, i=0;
    while ((ch = getchar()) != '\n') {
      s[i++] = ch;
      if (i == 10000)
          break;
	}
    s[i] = '\0';
    s = realloc(s, strlen(s)+1);
    return s;
}

void main() {
	puts("calling readline");
    char a[10];
    readline(a, 9);
	puts("");
	
	puts("calling readline2");
    char *b = readline2();
	puts("");

	puts("results");
    printf("readline: %s\n", a);
    printf("readline2: %s\n", b);
	free(b);
	puts("");

    puts("calling scanf");
    char s[10], t[10];
    scanf("%9s",s);
    printf("scanf result: %s\n", s);
	puts("");

	puts("calling fgets");
    fgets(t, 9, stdin);
    printf("fgets result: %s\n", t);
	puts("");
}
