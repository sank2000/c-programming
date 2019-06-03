#include<stdio.h>
int main()
{
    FILE *fp;
    char name[100];int i,age;
    fp =fopen("file.txt","a+");
    if(fp==NULL)
    {
        printf("it is not opened");
    }
    for(i=0;i<5;i++)
    {
    	fflush(stdin);
	printf("ENTER THE NAME:");
    scanf("%s",&name);
    printf("Enter the age:");
    scanf("%d",&age);
    fprintf(fp,"%-20s\t%2d\n",name,age);
}
    fclose(fp);
    return 0;
}
