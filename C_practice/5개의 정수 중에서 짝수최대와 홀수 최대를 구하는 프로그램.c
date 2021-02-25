#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int i, max_odd, max_even;
	int array[NUMBER];
	printf("다섯가지의 숫자를 입력하세요:");
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
	printf("짝수 중의 최댓값은 %d입니다", max_even);
	printf("홀수 중의 최댓값은 %d입니다", max_odd); 
	return 0;
}
