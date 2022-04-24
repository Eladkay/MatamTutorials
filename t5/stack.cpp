#include "stack.h"
#include <string>
#include <iostream>
void error(std::string error_message) {
	std::cout << "Error: " << error_message;
}
Stack::Stack(int maxSize) {
	data = new int[maxSize];
	this->maxSize = maxSize;
	nextIndex = 0;
}

Stack::~Stack() {
	delete[] data;
}

void Stack::push(int n) {
	if (this->isFull()) {
		error("Stack full");
	}
	data[nextIndex++] = n;
}
int Stack::getSize() const {
	return nextIndex;
}
void Stack::pop() {
	if (this->isEmpty()) {
		error("Stack empty");
	}
	nextIndex--;
}
int& Stack::top() {
	if (this->isEmpty()) {
		error("Stack empty");
	}
	return data[nextIndex - 1];
}
bool Stack::isFull() const{
	return this->getSize() >= maxSize;
}
bool Stack::isEmpty() const{
	return nextIndex <= 0;
}

