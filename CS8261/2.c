#include<stdio.h>
int main()
{
	int a;
	/*checking for positive or negative*/
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0)
	    printf("%d is a positive number",a);
	else
		printf("%d is a negative number",a);
	return 0;
}
