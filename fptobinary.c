#include <stdio.h>

int bit_return(int a, int loc) {
	int buf = a & 1<<loc;

	if (buf == 0) return 0;
	else return 1;
}

int main(int argc, char **argv) {
	float a;
	int *b;

	int i;

	scanf("%f", &a);

	b = &a;

	for (i = 31; i >= 0; i--) {
		printf("%d", bit_return(*b, i));
	}

	return 0;
}
