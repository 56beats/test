#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	if (n % 3 == 0 && n % 5 == 0)//3と5で割り切れるとき
	{
		printf("fizzbuzz\n");
	}else if(n % 3 == 0){
		printf("fizz\n");
	}else if(n % 5 == 0){
		printf("buzz\n");
	}
	
	return 0;
}