#include <stdio.h>

// 반복함수를 이용하여 숫자 피라미드를 출력합니다.
int print(int a)
{
	
	int i, j;
	for(i=0; i<a; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d", j+1);
		}
		printf("\n");
	}
} 
int main(void){
	int a;
	printf("숫자를 입력하세요:");
	scanf("%d", &a);
	print(a);
	return 0;
} 
