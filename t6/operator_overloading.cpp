#include <iostream>
#include <string>
class Complex {
	double real;
	double imaginary;
public:
	// PART 1
	Complex(double real, double imaginary) : real(real), imaginary(imaginary) {
                std::cout << "C1: " << real << " + i" << imaginary << std::endl;
        }
	Complex operator+(const Complex& other) const {
		std::cout << "Addition: *this=(" << real << ", " << imaginary << "), other=(" << other.real << ", " << other.imaginary << ")" << std::endl;
		return Complex(real + other.real, imaginary + other.imaginary);
	}
	Complex operator*(const Complex& other) const {
                std::cout << "Multiplication: *this=(" << real << ", " << imaginary << "), other=(" << other.real << ", " << other.imaginary << ")" << std::endl;
                return Complex(real * other.real - imaginary * other.imaginary, imaginary * other.real + real * other.imaginary);
        }


	// PART 2
	// casting constructor
	Complex(double real) : real(real), imaginary(0) {
		std::cout << "C2: " << real << " + i" << imaginary << std::endl;
	}
	// copy constructor
	Complex(const Complex& other) : real(other.real), imaginary(other.imaginary) {
		std::cout << "C3: " << real << " + i" << imaginary << std::endl;
	}
	// assignment operator
	Complex& operator=(const Complex& other) {
		if (this == &other) {
			return *this;
		}
		real = other.real;
		imaginary = other.imaginary;
		std::cout << "Assgn: " << real << " + i" << imaginary << std::endl;
		return *this;
	}
};

int main(int argc, char** argv) {
	if(argc != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	std::string arg = argv[1];
	if (arg == "1") {
		Complex z(1.0, 1.0);
		Complex w(2.0, 3.0);
		z + w;
		z * w;
	} else if(arg == "2") {
		Complex z(1.0, 1.0);
		Complex w = 2.0;
		Complex r = z;
		r = w;
	} else {
		std::cout << "Wrong args" << std::endl;
	}
	return 0;
}
