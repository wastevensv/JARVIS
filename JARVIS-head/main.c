#include <stdio.h>

int main (int argc, char *argv[])
{
	char c='A';
	char command[128];
	printf("JARVIS> ");
	bzero(command, sizeof(command));
	while(c != EOF) {
		c = getchar();
		switch(c) {
			case '\n':
				printf("Response: %s\n",command);
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

