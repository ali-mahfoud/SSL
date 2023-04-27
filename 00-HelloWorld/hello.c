#include <stdio.h>

int main (void){
	char* filename = "output.txt";
	char* expectedOuput = "Hello World!";

	FILE* outputFile = fopen(filename, "w");
	fprintf(stdout, expectedOuput);
	fprintf(outputFile, expectedOuput);
	fclose(outputFile);

	return 0;
}
