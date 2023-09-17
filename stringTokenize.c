//DATE: 2023.09.16
//PURPOSE: A program breaks down a sentence into words(tokenize)

#include <stdio.h>
#include <string.h>

int main() {

	char str[] = "Hello how are you";
	char deLimiter[] = " ";
	char* pToken;

	//Set the pointer (initialize) to the beginning of str 'H'ello. strtok() remembers it's last location. 
	//pToken will be "Hello"
	pToken = strtok(str, deLimiter);

	//invoke strtok again, and again, to separate, until reaches the end. 
	//NULL has to be passed, otherwise it starts over.
	while (pToken != NULL) {
		printf("%s\n", pToken);
		pToken = strtok(NULL, deLimiter);
	}

	return 0;
}