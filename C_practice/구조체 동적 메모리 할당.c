#include <stdio.h>
#include <stdlib.h>

struct Book{
	int number;
	char title[100];
};

void showBook(struct Book *p, int n){
	int i;
	for(i=0; i<n; i++)
	{
		printf("��ȣ: %d ����: %s\n",(p+i)->number, (p+i)->title);
	}
}

int main(void)
{
	struct Book *p;
	p = (struct Book *)malloc(2*sizeof(struct Book));
	if(p == NULL)
	{
		printf("���� �޸� �Ҵ翡 �����Ͽ����ϴ�.\n");
		exit(1); // ���α׷� ����!!!! 
	}
	p->number = 1; //������ ����ü�� ������ p.�̷��� �Ƚᵵ �ǰ� �̷��� ���µ�? 
	strcpy(p->title, " C programming");
	
	(p+1) -> number = 2;
	strcpy((p+1)->title , "Data Structure");
	showBook(p,2);
	free(p); 
	return 0;
}
