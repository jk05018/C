#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5] = "A";
	char inputTwo[5] = "B";
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo)); // strcmp 문자열 비교 strlen 문자열 길이 
}
