#include<stdio.h>
int main()
{
	int a;
	/*checking for minor or major*/
	printf("Enter the age:");
	scanf("%d",&a);
	if(a>=18)
		printf("\n the person is major");
	else
		printf("\n the person is minor");
	return 0;

}
