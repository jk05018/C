#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i, max_odd, max_even;
	int array[NUMBER];
	printf("�ټ������� ���ڸ� �Է��ϼ���:");
	for(i = 0; i < NUMBER; i++)
	{
		int k;
		scanf("%d",&k);
		array[i] = k;
		if((k%2) == 0)
		{
			if(max_even < k)
			{
				max_even = k;
			}
		}
		else
		{
			if(max_odd < k)
			{
				max_odd = k;
			}
		}
	}
	printf("¦�� ���� �ִ��� %d�Դϴ�", max_even);
	printf("Ȧ�� ���� �ִ��� %d�Դϴ�", max_odd); 
	return 0;
}
