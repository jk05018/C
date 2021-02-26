#include <stdio.h>

struct point{
	int x;
	int y;
}; 

void comparePoint(struct point p1, struct point p2)
{
	if((p1.x == p2.x) && (p1.y == p2.y))
	{
		printf("p1과 p2는 같습니다.");
	 } 
	
 } 
int main(void)
{
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
	// 구조체를 직접 비교하는 것은 불가능하다. 
//	if(p1 == p2){
//		printf("p1과 p1가 같습니다");
//	}

	comparePoint(p1,p2);
	
	
	return 0;
}
