#include <stdio.h>
#include <stdbool.h>

int main () {
	float x;
	float y;
	bool exists = true;

	printf("Enter x: ");
	scanf("%f", &x);

	if (x >= 0){
		if (x < 7){
			y = -6 * x * x + 8;
		}
		else if (x >= 11) {
			y = -(x * x * x / 7) + 10;
		} else{
			printf("The y doesn't exist with this x\n");
			exists = false;
		}
	} else{
		if (x <= -10){
			y = -(x * x * x / 7) + 10;
		} else{
			printf("The y doesn't exist with this x\n");
			exists = false;
		}
	}

	if (exists) {
		printf("y = %f\n", y);
	}

	system("pause");
	return 0;
}