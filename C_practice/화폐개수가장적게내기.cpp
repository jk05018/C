#include <stdio.h>

// 특정한 금액을 받아서 가장 적은 거스름 화폐의 개수를 구하는 함수

int smallest(int number)
{
	int count = 0;
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
	return count;
 } 

int main(void) 
{
	int number, final; 
	printf("돈을 입력하세요:");
	scanf("%d", &number);
	final = smallest(number);
	printf("내야될 화폐의 수는 %d개 입니다", final );
	
	return 0;
}
