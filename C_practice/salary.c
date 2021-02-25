#include <stdio.h>
#define MONTHS 12
// 이렇게 상수를 정의해준다 위의 의미 MONTHS에 12라는 상수를 정의한다 
int main(void){
	double monthSalary = 1000.5;
	printf("$%.2f", MONTHS*monthSalary); 
	return 0;
}
