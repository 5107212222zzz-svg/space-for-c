//第n行有n个*，遇到困难是如何在输出m和*这里也用到了for循环
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
