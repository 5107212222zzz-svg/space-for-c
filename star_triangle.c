#include<stdio.h>
int main() {

	int n=1;
	scanf_s("%d", &n);
	int count = 1, num = 1;
	for (count = 1;count <= n;count++)
	{
		for (num = 1;num <=count;num++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;

}