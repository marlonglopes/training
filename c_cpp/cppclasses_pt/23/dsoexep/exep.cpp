
#include "exep.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

exep::exep(const exep &other):message(NULL)
{

	char *tmp;
	other.getmsg(&tmp);
	int msglen = strlen(tmp);
	message = (char*)calloc(msglen+1, sizeof(char));
	strncpy(message, tmp, msglen);
	free(tmp);
}

exep::exep(const char *msg):message(NULL)
{

	int msglen = strlen(msg);
	message = (char*)calloc(msglen+1, sizeof(char));

	strncpy(message, msg, msglen);

}

exep::~exep(){

	if (message != NULL){
		printf("mvdebug freeing up...\n");
		free(message);
	}

}

void exep::getmsg(char **msg) const {

	int msglen = strlen(message);
	(*msg) = (char*)calloc(msglen+1, sizeof(char));
	strncpy(*msg, message, msglen); 

}

