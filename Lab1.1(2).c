#include <stdio.h>
#include <stdbool.h>

int main () {
	float x;
	float y;
	bool exists = true;

	printf("Enter x: ");
	scanf("%f", &x);

	if (x >= 0 && x < 7) { // у проміжку [0; 7)
		y = -6 * x * x + 8;
	} 
	else if (x <= -10 || x >= 11) { // у проміжку (-∞,-10]∪[11,+∞)
		y = -(x * x * x / 7) + 10;
	}
	else { // у жодному проміжку
		exists = false;
		printf("The y doesn't exist with this x\n");
	}

	if (exists) {
		printf("y = %f\n", y);
	}

	system("pause");
	return 0;
}