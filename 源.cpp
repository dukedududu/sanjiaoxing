#include<stdio.h>
int main()
{
	int a, b, c;
	scanf_s("%d%d%d",&a,&b,&c);
	if (a + b > c&& a + c > b&& b + c > a)
	{
		if (a == b && a == c && c == b)
		{
			printf("2");
		}
		else if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
			printf("3");
		else
			printf("0");
	}
	else
		printf("error!");
	return 0;
}