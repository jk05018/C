#include <stdio.h>

int main(void){
	
	int year = 2015;
	if(year%4 ==0 && year%100 != 0 || year %400 == 0){
		printf("%d ���� �����Դϴ�",year);
		
}else{
	printf("%d���� ������ �ƴմϴ�.",year);
}
	return 0;
}
