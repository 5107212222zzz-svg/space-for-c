#include <stdio.h>
int main() {
	long int a, b;
	scanf_s("%ld %ld", &a, &b);
	

	for ( 1; a>0&&b>0;a = a + b, b = a + b)
	{
		printf("%ld %ld ",a ,b);

	}
	

	return 0;
}
