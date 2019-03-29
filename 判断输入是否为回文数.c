
#include <stdio.h>
void main()
{
	int num,s,y=0;
	printf("Please input numbers: ");
	scanf("%d", &num);
	s=num;
	while(s>0)
    {
		y=y*10+s%10;
		s=s/10;
	}
	if(y==num)
		printf("%d是一个回文数!\n", num);
	else
		printf("%d不是一个回文数!\n", num);

}
