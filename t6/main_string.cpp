#include "string.h"


int main() {
	String s = "So long";
	String s2 = "and thanks for all the fish.";
	String s3 = s + " " + s2;
	s3[s3.size() - 1] = '!';
	cout << s3 << endl;
	return 0;
}


