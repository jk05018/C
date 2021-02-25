#include <stdio.h>
#include <limits.h>
#define NUMBER 5 

int main(void)
{
	int i, max,min = INT_MAX, max_index, min_index;
	int array[NUMBER];
	// array[0] ~ array[4]
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];	
			max_index = i;
		}
		else if( min > array[i])
		{
			min = array[i];
			min_index = i;	
		}	
	}	
	
	printf(" 배열:");
	for(i = 0; i < NUMBER; i++)
	{
		printf("%d , ",array[i]);
	}
	printf("\n");
	printf("가장 큰 값은 %d 이고, 그 위치는 %d 입니다.",max,max_index); 
	printf("가장 작은  값은 %d 이고, 그 위치는 %d 입니다.",min,min_index); 
	
	
	return 0;
}
