#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi; // point integer
	pi =(int *)malloc(sizeof(int)); //malloc = �޸𸮸� �Ҵ��� ��
	if(pi == null)
	{
		printf("���� �޸� �Ҵ翡 �����Ͽ����ϴ�\n");
		exit(1);	// �� ���α׷� ��ü�� �����Ѵ�. 
	 } 
	 *pi = 100;
	 printf("%d\n",*pi);
	 // ���� �޸� ����� ���Ŀ��� ������ �ش� �޸𸮸� ��ȯ�Ѵ�. �ſ� �߿�
	 free(pi); 
	return 0;
 } 
