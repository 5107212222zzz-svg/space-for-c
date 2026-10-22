#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	

	for ( 1; a>0&&b>0;a = a + b, b = a + b)
	{
		printf("%d %d ",a ,b);

	}
	printf("There is overflow");

	return 0;
}