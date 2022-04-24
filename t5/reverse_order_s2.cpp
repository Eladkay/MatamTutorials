#include <iostream>
#include "Stack.h"

const int MAX_SIZE = 100;
const int UNDO_LAST_COMMAND = -1;
int main() {
	Stack stack(MAX_SIZE);
	int input;
	while (!stack.isFull() && std::cin >> input) {
		if (input != UNDO_LAST_COMMAND) {
			stack.push(input);
		}
		else if (!stack.isEmpty()) {
			stack.pop();
			std::cout << "undo" << std::endl;
		} else {
			std::cout << "Cannot undo" << std::endl;
		}
	}
	while (!stack.isEmpty()) {
		std::cout << stack.top();
		stack.pop();
	}
	return 0;
}

