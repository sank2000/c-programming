#include<stdio.h>
int main()
{
    FILE *fp;int n=3;
    char name[100];int age;
    fp =fopen("file.txt","r");
    if(fp==NULL)
    {
        printf("it is not opened");
    }
    while(fscanf(fp,"%s\t%d",name,&age)!=EOF)
    {

        printf("%-20s\t%d\n",name,age);
    }
    fclose(fp);
    return 0;
}
