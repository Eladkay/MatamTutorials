#include <stdio.h>

int is_prime(unsigned long long x) {
	for(unsigned long long i = 2; i < x; i++) {
		if(x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	unsigned long long i = 2;
	while(i) {
		if(is_prime(i)) {
			printf("%llu\n", i);
		}
		i += 1000001;
	}
	return 0;
}
