#include <stdio.h>

int main(int argc, char** argv) {
	printf("The arguments (%d of them) are: \n", argc);
	for(int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}
