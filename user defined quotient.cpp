#include <stdio.h>
int main() {
	int num1, num2;
	float quotient;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	if (num2 == 0){
		printf("Error: Division by zero is not allowed.\n");
		return 1; //indicate an error
	}
	quotient = (float)num1 / num2;
	printf("The quotient of %d and %d is: %.2f\n", num1, num2, quotient);
	return 0;

	
}
