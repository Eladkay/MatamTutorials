#include <stdio.h>

int global = 0;

int f() {
	static int n = 0;
	global++;
	n++;
	return n;
}
int g() {
	int n = 0;
	global++;
	n++;
	return n;
}
int main() {
	printf("f() = %d, g() = %d\n", f(), g());
	printf("f() = %d, g() = %d\n", f(), g());
	printf("f() = %d, g() = %d\n", f(), g());
	printf("f() = %d, g() = %d\n", f(), g());
	printf("global = %d\n", global);
	return 0;
}
