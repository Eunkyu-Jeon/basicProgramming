#include <stdio.h>

int main(void)
{
	for (int i = 2; i < 10; i++) {
		
		for (int k = 1; k < 10; k++) {
			printf("%dx%d=%d ", i, k, k * i);
			if (k == 9) {
				printf("\n");
			}
		}
	}
}
