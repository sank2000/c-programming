#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void tickets(int i,int tic);
int first=5,second=5,thired=5,train_no=636102;
struct node
{
char cls[15];
int ticketno;
char phoneno[12];
char name[100];
}s[15];
int i=0;
void booking()
{
    int opt;
    printf("\n\n1.First class\n2.Second class\n3.Third class");
    printf("\nSelect your option:");
    scanf("%d",&opt);
    switch(opt)
    {
case 1:
    tickets(i,first);
    strcpy(s[i].cls,"First class");
    first--;
    i++;break;
case 2:
    tickets(i,second);
    strcpy(s[i].cls,"second class");
    second--;
    i++;break;
case 3:
    tickets(i,thired);
    strcpy(s[i].cls,"Third class");
    thired--;
    i++;break;
default:
    printf("Select crt option");break;
    }

}
void tickets(int i,int tic)
{
printf("\nEnter your details");
printf("\nName:");
scanf("%s",s[i].name);
printf("\nPhonenumber:");
scanf("%s",s[i].phoneno);
printf("\nTicketnumber :");
printf("%d",tic);
s[i].ticketno=tic;
printf("\n\nTicket booked\n\n");

}
void availability()
{
int c;
printf("\n\nAvailability cheking");
printf("\n1.First class\n2.Second class\n3.Thired class\n");
printf("Enter the option");
scanf("%d",&c);
switch(c)
{
case 1:if(first>0)
{
printf("\nseat available\n");
printf("No of tickets available:%d\n",first);
}
else
{
printf("\nseat not available");
}
break;
case 2: if(second>0)
{
printf("\nseat available\n");
printf("No of tickets available:%d\n",second);
}
else
{
printf("\nseat not available");
}
break;
case 3:if(thired>0)
{
printf("\ nseat available\n");
printf("No of tickets available:%d\n",thired);
}
else
{
printf("\nseat not available");
}
break;
default:
break;
}
}
void cancel()
{
int c;
printf("\n\n\nCancel\n");
printf("Which class you want to cancel");
printf("\n1.First class\n2.Second class\n3.Thired class\n");
printf("Enter the option:");
scanf("%d",&c);
switch(c)
{
case 1:
first++;
break;
case 2:
second++;
break;
case 3:
thired++;
break;
default:
break;
}
printf("Ticket is canceled");
}
void chart()
{
int c;
printf("\n               Train chart            ");
printf("\nTrain no\tclass\t    Ticket No\tName\n\n");
for(c=0;c<i;c++)
{
printf("%-8d\t%-14s%-5d\t%s\n",train_no,s[c].cls,s[c].ticketno,s[c].name);
}
}
main()
{
int n;
while(1) {
printf("\n             welcome to railway ticket reservation\n");
printf("1.Booking\n2.Availability cheking\n3.Cancel\n4.Chart \n5. Exit\nEnter your option:");
scanf("%d",&n);
switch(n)
{
case 1: booking();
break;
case 2: availability();
break;
case 3: cancel();
break;
case 4:
chart();
break;
case 5:
printf("\n Thank you visit again!");
exit(0);
default:
break;
}
}
}
