#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt","r");
	
	if(fp == NULL)
	{
		printf("���� ã�� ���� �����Ͽ����ϴ�.");
	}
	else
	{
		printf("���� ã�⿡ �����Ͽ����ϴ�") ;
	}
	
	while((c=fgetc(fp))!= EOF)
	{
		putchar(c);
	 } 
	 fclose(fp);
	return 0;
}
