#include <stdio.h>
#define MONTHS 12
// �̷��� ����� �������ش� ���� �ǹ� MONTHS�� 12��� ����� �����Ѵ� 
int main(void){
	double monthSalary = 1000.5;
	printf("$%.2f", MONTHS*monthSalary); 
	return 0;
}
