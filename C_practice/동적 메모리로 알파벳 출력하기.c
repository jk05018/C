#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100*sizeof(char)); 
	if(pc == NULL)
	{
		printf("동적 메모리 할당에 실패하였습니다.\n");
		exit(1);
	}
	// pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입합니다.
	for(i = 0; i<26; i++)
	{
		// *(pc) == pc[0], *(pc+1) == pc[1]
		*(pc+i) = 'a'+i;
	 } 
	 //아스키 코드 0은 NULL을 의미한다. 
	 *(pc+i) = 0;
	 
	 printf("%s", pc);
	 free(pc);// 할당 해제 매우 중요하다!!!!!!!!!!!!> 
	return 0;
}
