#include <stdio.h>
#include "JARVIS-brain.h"

typedef char *string;

string parsestring(string com[])
{
	string response;
	string word;
	string tmp;
	bzero(word, sizeof(word));
	bzero(response, sizeof(response));
	int i=0;
	int w=0;
	while(com[i] != '\0') {
		char c = com[i];
		switch(c) {
			case ' ':
				sprintf(tmp, "%d: ", w);
				strncat(response, tmp, 1);
				strncat(response, word, 1);
				w++;
				break;
			default:
				strncat(word, &c, 1);
				break;
		}
		i++;
	}
	return &response;
}