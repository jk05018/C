#include <stdio.h>

// Ư���� �ݾ��� �޾Ƽ� ���� ���� �Ž��� ȭ���� ������ ���ϴ� �Լ�

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
	printf("���� �Է��ϼ���:");
	scanf("%d", &number);
	final = smallest(number);
	printf("���ߵ� ȭ���� ���� %d�� �Դϴ�", final );
	
	return 0;
}
