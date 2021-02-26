#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi; // point integer
	pi =(int *)malloc(sizeof(int)); //malloc = 메모리를 할당하 라
	if(pi == null)
	{
		printf("동적 메모리 할당에 실패하였습니다\n");
		exit(1);	// 이 프로그램 자체를 종료한다. 
	 } 
	 *pi = 100;
	 printf("%d\n",*pi);
	 // 동적 메모리 사용한 이후에는 무조건 해당 메모리를 반환한다. 매우 중요
	 free(pi); 
	return 0;
 } 
