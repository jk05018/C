#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1)
	{
		printf("������ �Է��ϼ���:");
		scanf("%d %c %d", &x, &o, &y);//���ʴ�� �Է��� �ްڴ�
		if(o== '+')
		{
			printf("%d %c %d = %d\n", x,o,y,x+y);
		 }else if(o == '-')
		 {
		 	printf("%d %c %d = %d\n", x,o,y,x-y);
		 }else if(o == '*')
		 {
		 	printf("%d %c %d = %d\n", x,o,y,x*y);
		 	
		 }else if(o == '/')
		 {
		 	printf("%d %c %d = %d\n", x,o,y,x/y);
		 }else
		 {
		 	printf("�Է��� �߸��Ǿ����ϴ�."); 
		 }
		 getchar();
		 printf("���α׷��� �����Ͻðڽ��ϱ�? (y/n)");
		 scan("%o", &o);
		 if(o == 'n'|| o == 'N')
		 {
		 	continue;
		  } 
		  else
		  {
		  	break;
		  }
		 }
	return 0;
}
