#include<stdio.h>
void binary_loop(long num);
void binary(long num);

int main(void)
{
	long num=0;
	puts("请输入一个正整数: ");
	scanf("%ld", &num);
	if (num==0)
		printf("%ld", num);
	printf("使用递归：");
	binary(num);
	printf("\n");
	printf("使用循环：");
	binary_loop(num);
	printf("\n");

	return 0;
}


//使用循环
void binary_loop(long num)
{
	int i=0;
	long temp[100];
		for(i=0; num>0; i++, num=num/2)
		{
			temp[i]=num%2;
		}
		for(int j=i-1; j>=0; j--)
		{
			printf("%ld", temp[j]);

		}
}
// 用递归
void binary(long num)
{
	if(num>0)
	{
		binary(num/2);
		printf("%ld", num%2);
	}
}

