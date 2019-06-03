#include<stdio.h>
struct stud{
char name[20];
long int rollno;
int marks[5][3];
int i[5];
}students[10];
void calcinternal(int);
int main(){
int a,b,j,n;
printf("How many students :");
scanf("%d",&n);
for(a=0;a<n;++a){
printf("\n\nEnter the details of %d student : ", a+1);
printf("\n\nEnter student %d Name : ", a+1);
scanf("%s", students[a].name);
printf("\n\nEnter student %d Roll Number : ", a+1);
scanf("%ld", &students[a].rollno);
for(b=0;b<=4;++b){
for(j=0;j<=2;++j){
printf("\n\nEnter the test %d mark of subject-%d : ",j+1, b+1);
scanf("%d", &students[a].marks[b][j]);
}
}
}
calcinternal(n);
for(a=0;a<n;++a){
printf("\n\n\t\t\t\tMark Sheet\n");
printf("\nName of Student : %s", students[a].name);
printf("\t\t\t\t Roll No : %ld", students[a].rollno);
printf("\n------------------------------------------------------------------------");
for(b=0;b<5;b++){
printf("\n\n\t Subject %d internal \t\t :\t %d", b+1, students[a].i[b]);
}
printf("\n\n------------------------------------------------------------------------\n");
}
return 0;
}
void calcinternal(int n)
{
int a,b,j,total;
for(a=0;a<=n;++a){
for(b=0;b<5;b++){
total=0;
for(j=0;j<=2;++j){
total += students[a].marks[b][j];
}
students[a].i[b]=total/3;
}
}
}
