#include <stdio.h>

int main(void)
{
	char input[1001];
	gets(input);// enter를 칠때까지 입력이 들어간다
	
	int count = 0;
	while(input[count]!= 0){
		count++;
	} 
	printf("입력한 문자열의 길이는 %d 입니다.", count);
	printf("입력한 문자열 : %s", input); // %s 는 문자열 출력이라는 뜻 이렇게 쓰면 된단다. 
	return 0;
}
