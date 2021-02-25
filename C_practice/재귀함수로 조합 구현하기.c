#include <stdio.h>

int nCr(int n, int r)
{
	if(r==0 || n == r)
	{
		return 1;
	}
	else{
		return nCr(n-1,r-1) + nCr(n-1,r);
	}
 } 

int main(void)
{
	int n, r, answer;
	scanf("%d %d", &n,&r);
	answer = nCr(n,r);
	printf("answer: %d", answer);
	return 0;
}
