#include <stdio.h>

int main(void)
{
	int num1 = 10; // num1 : 9
	int num2 = (num1--) + 2; // 후위 감소, num2 : 12

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);

	return 0;
}