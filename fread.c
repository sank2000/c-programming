#include<stdio.h>
int main()
{
    FILE* fq;
    char c[20];int num;
    fq=fopen("text3.txt","a+");
    fseek(fq,0,SEEK_SET);
    fread(&num,4,1,fq);
    printf("%d",num);
    fclose(fq);
    return 0;
}
