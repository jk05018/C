#include <stdio.h>

// �ݺ��Լ��� �̿��Ͽ� ���� �Ƕ�̵带 ����մϴ�.
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
	
	return 0;
} 
