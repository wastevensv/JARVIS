#include <stdio.h>
#include "JARVIS-brain.h"

typedef char *string;

int main (int argc, char *argv[])
{
	char c='A';
	string command;
	string response;
	printf("JARVIS> ");
	bzero(command, sizeof(command));
	while(c != EOF) {
		c = getchar();
		switch(c) {
			case '\n':
				response = parsestring(command);
				printf("Response: %s\n",response);
				bzero(command, sizeof(command));
				printf("JARVIS> ");
				break;
			default:
				strncat(command, &c, 1);
				break;
		}
	}
	return 0;
}

