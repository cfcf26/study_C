#include<stdio.h>
//거스름돈 최소화폐 구하기

//기존 프로그램은 최소화폐갯수만 구했으나 나는 각 화폐가 몇개씩 필요한지 따로 반환하겠다

int smallest(int number)
{
	int count= 0;

	while(number >= 50000)
	{
		number -= 50000;
		count++;
	}

	while(number >= 10000)
	{
		number -= 10000;
		count++;
	}

	while(number >= 5000)
	{
		number -= 5000;
		count++;
	}

	while(number >= 1000)
	{
		number -= 1000;
		count++;
	}

	while(number >= 500)
	{
		number -= 500;
		count++;
	}

	while(number >= 100)
	{
		number -= 100;
		count++;
	}

	while(number >= 50)
	{
		number -= 50;
		count++;
	}

	while(number >= 10)
	{
		number -= 10;
		count++;
	}
	return count;
}

int main(void)
{
	int number;
	printf("금액을 입력하세요");
	scanf("%d", &number);
	printf("최소 화폐는 : %d\n", smallest(number));
	return 0;
}


