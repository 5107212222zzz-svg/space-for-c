#include <stdio.h>
int main()
{
	int n=1,count=1,
	sum=0;
	scanf("%d",&n);
	if (n <= 0) {
		printf("Input error");
		return 1;
	}
	for(sum=0;count<=n;count++)
	{sum+=count;
	}
	printf("%d",sum);
	return 0;
}
