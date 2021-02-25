#include <stdio.h>

int main(void){
	int x = 50;
	float y = 1234567.123455;
	double z = 1234567.123455;
	printf("x = %d\n",x);
	printf("y=  %.2f\n",y); // %.2f 실수를 출력할 건데 소수 둘째자리 까지만 출력을 하겠다. 
	printf("z = %.2f\n", z);
	return 0;
}
