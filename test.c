#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() //方法1
{
	int i = 1;
	int n = 0;
	int j = 1;
	int num = 0;
	while (i <= 10)
	{
		n++;
		for (; i <= n; i++)
		{
			j *= i;
			printf("%d ", j);
		}
		num = num + j;
	}
	printf("%d ", num);
	return 0;
}
///////////////////////////////////////////////////
int main() //方法2
{
	int n;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}