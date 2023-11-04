#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z, W;
	printf("Ingrese los valores de x, y, z: \n");
	scanf("%f %f %f", &x, &y, &z);
	W = sqrt(pow(x, 2) + pow(y, 4) - exp(z) + atan(x*y*z));
	printf("El valor de W es: %.2f", W);
	return 0;
}
