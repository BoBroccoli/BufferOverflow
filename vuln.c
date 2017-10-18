#include <stdio.h>
#include <string.h>
void func(char **argv){
	char buffer[100];
	strcpy(buffer, argv[1]);
	printf("Done!\n");
}
int main (int argc, char** argv){
	func(argv);
	return 0;
}
