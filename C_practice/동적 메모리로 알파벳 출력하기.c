#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100*sizeof(char)); 
	if(pc == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		exit(1);
	}
	// pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��ڸ� �����մϴ�.
	for(i = 0; i<26; i++)
	{
		// *(pc) == pc[0], *(pc+1) == pc[1]
		*(pc+i) = 'a'+i;
	 } 
	 //�ƽ�Ű �ڵ� 0�� NULL�� �ǹ��Ѵ�. 
	 *(pc+i) = 0;
	 
	 printf("%s", pc);
	 free(pc);// �Ҵ� ���� �ſ� �߿��ϴ�!!!!!!!!!!!!> 
	return 0;
}
