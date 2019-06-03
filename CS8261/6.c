#include<stdio.h>
int percube(int num)
{
int i,flag=0;
for(i=0;i<=num/2;i++)
{
if((i*i*i)==num)
{
flag=1;
break;
}
}
return flag;
}
int prime(int num)
{
int i,flag=1;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=0;
break;
}
}
return flag;
}
int main()
{
int onum[100],wnum[100],num=6,i,k=1;
printf("enter the number of elements:");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("enter the %d element:",k);
scanf("%d",&onum[i]);
k=k+1;
}
for(i=0;i<num;i++)
{
wnum[i]=0;
if(percube(onum[i]))
wnum[i]+=5;
if((onum[i]%4==0)&&(onum[i]%6==0))
wnum[i]+=4;
if(prime(onum[i]))
wnum[i]+=3;
}
printf("#########Before sorting##########");
printf("\nNumber\tWeight");
for(i=0;i<num;i++)
{
printf("\n %-9d %d",onum[i],wnum[i]);
}
for(i=0;i<num;i++)
for(int j=0;j<num-1;j++)
{
if(wnum[j]>wnum[j+1])
{
int e;
int t=wnum[j];
wnum[j]=wnum[j+1];
wnum[j+1]=t;
e=onum[j];
onum[j]=onum[j+1];
onum[j+1]=e;

}
}
printf("\n\n############After sorting#######");
printf("\nNumber\tWeight");
for(i=0;i<num;i++)
{
printf("\n %-9d %d",onum[i],wnum[i]);
}
return 0;
}
