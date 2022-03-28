#include <stdio.h>

int main() {
	int x = 5; // a variable
	int* ptr = &x; // x's address
	printf("x=%d\n", x);
	printf("&x=%p\n", ptr);
	
	int* null_pointer = NULL;
	printf("Null: %p\n", null_pointer);
	
	void* as_void_ptr = ptr; // correct
	/* void value = *as_void_ptr; // incorrect */
	
	double* read_as_double = (double*) as_void_ptr;
	printf("Read as double: %lf\n", *read_as_double);

//	int stam = *null_pointer; // segmentation fault

	int arr[] = {1, 2, 3};
	printf("array start: %p\n", arr);
	printf("arr[0]: %d\n", *arr);
	printf("arr[1]: %d\n", *(arr + 1));
	printf("diff: %li\n", (arr + 1) - arr);
	printf("address where the address of the array is stored: %p\n", &arr);
	return 0;
}
