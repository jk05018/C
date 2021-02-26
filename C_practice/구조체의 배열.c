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
		printf("학번을 입력하새요");
		scanf("%d", &list[i].number);
		printf("이름을 입력하새요");
		scanf("%s", &list[i].name);
		printf("학점을 입력하새요");
		scanf("%1f", &list[i].grade);
	}
	
	for(i=0 ; i<SIZE; i++){
		printf("학점: %d 이름: %s 학점: %.1f\n", list[i].number, list[i].name,list[i].grade);
	}
	return 0;
}
