#include <stdio.h>

int main(void){
	int x = 50;
	float y = 1234567.123455;
	double z = 1234567.123455;
	printf("x = %d\n",x);
	printf("y=  %.2f\n",y); // %.2f �Ǽ��� ����� �ǵ� �Ҽ� ��°�ڸ� ������ ����� �ϰڴ�. 
	printf("z = %.2f\n", z);
	return 0;
}
