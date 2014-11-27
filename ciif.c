#include <stdio.h>

int main(void)
{
	FILE* asciifile = NULL;
	int c;
	asciifile = fopen("art", "r");
	c = getc(asciifile);
	while (c != EOF) {
		putchar(c);
		c = getc(asciifile);
	}
	fclose(asciifile);	
}
