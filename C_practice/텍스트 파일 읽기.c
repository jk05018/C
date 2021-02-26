#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt","r");
	
	if(fp == NULL)
	{
		printf("파일 찾는 것을 실패하였습니다.");
	}
	else
	{
		printf("파일 찾기에 성공하였습니다") ;
	}
	
	while((c=fgetc(fp))!= EOF)
	{
		putchar(c);
	 } 
	 fclose(fp);
	return 0;
}
