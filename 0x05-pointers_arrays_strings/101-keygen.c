#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
	srand(time(NULL)); // seed the random number generator with the current time
		char password[11]; // password is a string of length 10 plus a null terminator
	for (int i = 0; i < 10; i++) {
	password[i] = rand() % 94 + 33; // generate a random printable ASCII character
	}
	password[10] = '\0'; // add a null terminator to the end of the string
	
	printf("%s\n", password); // print the generated password
	
	return 0;

}
