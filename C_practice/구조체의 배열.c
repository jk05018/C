#include <stdio.h>
#define SIZE 5

struct student{
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++){
		printf("�й��� �Է��ϻ���");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��ϻ���");
		scanf("%s", &list[i].name);
		printf("������ �Է��ϻ���");
		scanf("%1f", &list[i].grade);
	}
	
	for(i=0 ; i<SIZE; i++){
		printf("����: %d �̸�: %s ����: %.1f\n", list[i].number, list[i].name,list[i].grade);
	}
	return 0;
}
