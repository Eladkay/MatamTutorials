#include <iostream>
#include <cassert>

const int MAX_SIZE = 100;
const int UNDO_LAST_COMMAND = -1;
int main() {
	int input, size = 0, numbers[MAX_SIZE];
	while (size < MAX_SIZE && std::cin >>input) {
		if (input != UNDO_LAST_COMMAND) {
			assert(size >= 0 && size < MAX_SIZE);
			numbers[size++] = input;
		}
		else if (size > 0) {
			size--;
			std::cout << "undo" << std::endl;
		}
		else {
			std::cout << "Cannot undo"<< std::endl;
		}
	}
	while (size > 0) {
		std::cout << numbers[--size];
		assert(size >= 0 && size < MAX_SIZE);
	}
	return 0;
}
