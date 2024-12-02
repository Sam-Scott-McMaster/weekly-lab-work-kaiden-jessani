/* A demonstration of rot13 using indexes and pointers
 * because of numeric overflow in signed chars, this is
 * a bit tricker than you would think!
 *
 * That's why this only works for uppercase words. Can
 * you fix it so it works for lowercase words?
 *
 * Sam Scott, McMaster, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char s[100];
	puts("Enter an uppercase word.");
	scanf("%99s", s);

	for(int i=0; i<strlen(s); i++) {
		s[i] += 13;
		if (s[i] > 'Z') {
			s[i] -= 26;
		}
	}
	printf("rot13 encoding: %s\n", s);

	for(char *p=s; *p; p++) {
		*p += 13;
		if (*p > 'Z') {
			*p -= 26;
		}
	}
	printf("decoded: %s\n",s);
}
