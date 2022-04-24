#include <iostream>

int& getMax(int array[], int size) {
	int max_id = 0;
	for (int i = 1; i < size; ++i) {
		if (array[i] > array[max_id]) {
			max_id = i;
		}
	}
	return array[max_id];
}

int main() {
	int array[5] = { 1, 2, 5, 3, 4 };
	std::cout << "Original: ";
	for (int i = 0; i < 5; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	getMax(array,5) = 0; // array[4] = 0
	std::cout << "After change: ";
	for (int i = 0; i < 5; i++) {
                std::cout << array[i] << " ";
        }
	std::cout << std::endl;
}

