#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("sizeof(int) = %li\n", sizeof(int));
	int* pointer_to_int = malloc(sizeof(int));
	printf("sizeof(pointer_to_int) = %li\n", sizeof(pointer_to_int));
	free(pointer_to_int);
	free(NULL);

	int* new_pointer = malloc(sizeof(int));
	free(new_pointer);
	
	int* different_thing = malloc(sizeof(int));
	*different_thing = 5;

	printf("*new_pointer = %d\n", *new_pointer); // can't know what'll happen
	return 0;
}
