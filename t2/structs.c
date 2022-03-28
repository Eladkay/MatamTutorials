#include <stdio.h>
#include <stdlib.h>

struct location {
	double x;
	double y;
};

typedef struct location Location;

double get_length_squared(struct location point) {
	return point.x * point.x + point.y * point.y;
}

int main() {
	struct location point;
	point.x = 1.0;
	point.y = 2.0;
	printf("x = %lf\n", point.x); // here point is not a pointer
	printf("length squared: %lf\n", get_length_squared(point));
	struct location* pointer_to_point = &point;
	printf("x = %lf\n", pointer_to_point->x); // here pointer_to_point is a pointer
	printf("length squared: %lf\n", get_length_squared(*pointer_to_point));
	struct location second_point = { 1.0, 1.0 }; // legal
	return 0;
}
