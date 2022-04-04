#include <stdio.h>
#include <stdbool.h>

bool isBigger(int a, int b) {
	return a > b;
}

int abs(int a) {
	return a > 0 ? a : -a;
}

bool isBiggerAbs(int a, int b) {
	return abs(a) > abs(b);
}
int maxBy(int a, int b, bool (*comparator)(int, int)) {
	return comparator(a, b) ? a : b;
}

int main() {
	bool (*comparison_function)(int,int) = isBigger;
	printf("-5 > 4 == %d\n", comparison_function(-5, 4));
	comparison_function = isBiggerAbs;
	printf("|-5| > |4| == %d\n", comparison_function(-5, 4));
	printf("maxBy(-5, 4, isBigger) == %d\n", maxBy(-5, 4, isBigger));
	printf("maxBy(-5, 4, isBiggerAbs) == %d\n", maxBy(-5, 4, isBiggerAbs));
	return 0;
}
