#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "art.h"

void usage(char *filename)
{
	printf("Usage:\n%s \"<string>\"\n", filename);
	printf("No more than 15 Characters for input string\n");
}


int main(int argc, char *argv[])
{
	if(argc != 2 || strlen(argv[1]) > 15) {
		usage(argv[0]);
		exit(1);
	
	}
	
	time_t tim = time(NULL);
	struct tm *now = localtime(&tim);
	char *wday;
		
	switch(now->tm_wday) {
		case 0:
			wday = "Almost Monday :(";
			break;

		case 1:
			wday = "Oh noes, it's Monday";
			break;

		case 2:
			wday = "Tuesday.. definitely not Friday";
			break;

		case 3:
			wday = "Wednesday, time for lottery!";
			break;

		case 4:
			wday = "Almost there!";
			break;

		case 5:
			wday = "Hell yeah, it's Friday!";
			break;

		case 6:
			wday = "Saturday, long time until Friday";
			break;

		default:
			wday = "Seems like today is a non existent day. Awesome!";
	}

	printf(ART,argv[1],wday);

	return 0;
}
