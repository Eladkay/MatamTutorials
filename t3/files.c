#include <stdio.h>

int main() {
	FILE* my_file = fopen("elads_file", "w");
	fputs("Hello files!\n", my_file);
	char buffer[32];
	fclose(my_file);
	my_file = fopen("elads_file", "r");
	fgets(buffer, 32, my_file);
	printf("We read: %s\n", buffer);

	fclose(my_file);
	return 0;
}
