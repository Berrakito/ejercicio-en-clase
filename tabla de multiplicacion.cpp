#include <stdio.h>

int main() {
	int i, j, mul;
	for (i = 1; i <= 10; i++) {
		printf("\nTabla del %d\n", i);
		for (j = 1; j <= 10; j++) {
			mul = i * j;
			printf("%d x %d = %d\n", i, j, mul);
		}
		printf("\n");
	}
	return 0;
}
