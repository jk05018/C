#include <stdio.h>
#include <math.h>
struct point{
	int x;
	int y; 
};

struct rect{
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h , area, peri;
	printf("왼쪽 상단의 좌표를 입력하세요:");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	printf("왼쪽 하의 좌표를 입력하세요:");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p1.y - r.p2.y);
	
	area = w*h;
	peri = 2*(area+peri);
	printf("area: %d", area);
	printf("peri: %d", peri); 
	return 0;
}
