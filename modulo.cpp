#include <stdio.h>
int main(){
	int num1, num2, remainder;
	//get input from the user 
	printf("Enter the first integer (divident): ");
	scanf("%d", &num1);
	printf("Enter the second integer(divisor): ");
	scanf("%d", &num2);
	//check for division by zero
	if (num2 == 0){
		printf("Error: Division by zero is not allowed.\n");
		return 1;
	}
	//calculate the reminder using the modulo operator 
	remainder = num1 % num2;
	printf("The remainder of %d divided by %d is: %d\n" , num1, num2, remainder);
	return 0;
}
