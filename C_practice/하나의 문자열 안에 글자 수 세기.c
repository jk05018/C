#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);// enter�� ĥ������ �Է��� ����
	
	int count = 0;
	while(input[count]!= 0){
		count++;
	} 
	printf("�Է��� ���ڿ��� ���̴� %d �Դϴ�.", count);
	printf("�Է��� ���ڿ� : %s", input); // %s �� ���ڿ� ����̶�� �� �̷��� ���� �ȴܴ�. 
	return 0;
}
