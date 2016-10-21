#include<stdio.h>
void binary(int num);

int main(void)
{
	int num=0;
	int i=0;
	int temp[20]={5};
	int a=0;
	puts("Enter a number; ");
	scanf("%d", &num);
	a=num;
	if (num==0)
		printf("%d", num);
	else
	{
		for(i=0; num>0; i++, num=num/2)
		{
			temp[i]=num%2;
		}
		for(int j=i-1; j>=0; j--)
		{
			printf("%d", temp[j]);

		}
	}
	printf("\n");
	binary(a);
	printf("\n");

	return 0;
}

void binary(int num)
{
	if(num>0)
	{
		binary(num/2);
		printf("%d", num%2);
	}
}

