#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "art.h"

void Usage(char *filename)
{
	printf("Usage:\n%s \"<string>\"\n", filename);
	printf("No more than 15 Characters for input string\n");
}


int main(int argc, char *argv[])
{
	if(argc != 2 || strlen(argv[1]) > 15) {
		Usage(argv[0]);
		exit(1);
	
	}

	printf(ART,argv[1]);

/*	unsigned long inputlength = strlen(argv[1]) + 1;
	int i = 0;
	char *underscores;
	char *hyphons;
	
	underscores = malloc(sizeof(int) * inputlength);
	hyphons = malloc(sizeof(int) * inputlength);
	
	while (i < inputlength) {
		*(underscores+i) = '_';
		*(hyphons+i) = '-';
		i++;
	}

	i = 0;
	FILE *fp = NULL;
	int c;
	char str[60];

	fp = fopen("art", "r");
	
	while (!feof(fp)) {
		if (fgets(str,60,fp)) {
			if (i == 3) {
			printf("%s%s",str,underscores);
			i++;
			} else {
			printf("%s", str);
			i++;
			}
		}
	}

	c = getc(fp);
	while (c != EOF) {
		if(c == '\n') {i++;}
		if(c == '\n' && i == 3) {
			printf("%s",underscores);
			putchar(c);
			c = getc(fp);
                } if(c == '(' && i == 3) {
                        putchar(c);
			printf(" %s ",argv[1]);
                        c = getc(fp);
		} if(c == '\n' && i == 5) {
                        printf("%s",hyphons);
                        putchar(c);
                        c = getc(fp);
		} else {
			putchar(c);
			c = getc(fp);
		}
	}
	fclose(fp);*/
}
