#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define tic 60
#define fstcls 20
#define seccls 20
#define thrdcls 20
int k=0;
void booking();
void tic_in();
void availablity_checking();
struct rail tickets(struct rail r,int *fst,int *sec,int *thrd,int *i);
struct rail get(struct rail r,int i);
void print(struct rail r,int i);
struct rail
{
    long int no;
    int firstCls;
    int secondCls;
    int thirdCls;
    struct rrs
    {
	char name[30];
	char mobNo[12];
	char emailid[25];
	char t_class[20];
	int t_num;

    }s[tic];
}r[3];
int main()
{
   int n;
while(1)
{

    printf("\n ********WELCOME TO IRCTC RAIL CONNECT********\n");
    printf("       $$$$$********************$$$$$\n\n\n");
    printf("\n 1.Booking\n 2.Availablity checking \n 3.Cancellation process  \n 4.Display chart \n 5.Exit");
    printf("\n enter your choice....");
    scanf("%d",&n);


    switch(n)
    {
        case 1:
            booking();
            break;

        case 2:
            availablity_checking();
            break;


        case 3:
      //      cancellation();
            break;


        case 4:
      //      prepare_chart();
            break;

        case 5:
            exit(0);
        default:
            printf("\n enter a valid choice");
            break;
    }
}
   printf("\n%d %d %d",r[0].firstCls,r[0].secondCls,r[0].thirdCls);
   printf("\n%d %d %d",r[1].firstCls,r[1].secondCls,r[1].thirdCls);
   printf("\n%d %d %d",r[2].firstCls,r[2].secondCls,r[2].thirdCls);
   getch();
   return 0;
}
void tic_in()
{
    int i;
    for(i=0;i<3;i++)
    {
                r[i].firstCls=fstcls;
                r[i].secondCls=seccls;
                r[i].thirdCls=thrdcls;

    }
}
void booking()
{
    int train;
	printf("\n 1.Santhosh express \n 2.Sambath express \n 3.CP express");

	printf("\n\n select your train:");
	scanf("%d",&train);
	switch(train)
	{
	    case 1:
	        {
            static int i=0;
            int fst,sec,thrd;
            r[0].no=636110;
            if(k==0)
            {
                tic_in();
                k++;
            }
            fst=r[0].firstCls;
            sec=r[0].secondCls;
            thrd=r[0].thirdCls;
            if(i<tic)
			     r[0]=tickets(r[0],&fst,&sec,&thrd,&i);
			else
                printf("^^^^^^^Tickets not available^^^^^^^^^^");
			break;}
        case 2:
            {
            static int i=0;
            int fst,sec,thrd;
            r[1].no=636111;
            if(k==0)
            {
                tic_in();
                k++;
            }
            fst=r[1].firstCls;
            sec=r[1].secondCls;
            thrd=r[1].thirdCls;

            if(i<tic)
                r[1]=tickets(r[1],&fst,&sec,&thrd,&i);
			else
                   printf("^^^^^^^Tickets not available^^^^^^^^^^");
			break;}
        case 3:
             {
            static int i=0;
            int fst,sec,thrd;
            r[2].no=636112;
            if(k==0)
            {
                tic_in();
                k++;
            }
            fst=r[2].firstCls;
            sec=r[2].secondCls;
            thrd=r[2].thirdCls;
            if(i<tic)
			    r[2]=tickets(r[2],&fst,&sec,&thrd,&i);
			else
                printf("^^^^^^^Tickets not available^^^^^^^^^^");
                break;
			}
        default:
            printf("Please Select crt option");
            break;
}
}
struct rail tickets(struct rail r,int *fst,int *sec,int *thrd,int *i)
	{

	int c;
	printf("\n 1.first class \n 2.second class \n 3.third class");
	printf("\n enter the choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if((*fst)==0)
			{
				printf("\n the tickets are not available");
			}

			else
			{
				r=get(r,*i);

				printf("\n your ticket is booked");

				printf("\n\n your seat number is:%d",*fst);

				strcpy(r.s[*i].t_class,"First class");
				r.s[*i].t_num=(*fst);


		        print(r,*i);

				printf("\n your class:first class");
				printf("\n  your seat number:%d",*fst);
				(*i)++;
				(*fst)--;
				r.firstCls=(*fst);

				return r;
			}
			break;
	case 2:
	    if((*sec)==0)
			{
				printf("\n the tickets are not available");
			}

			else
			{
				r=get(r,*i);
				printf("\n your ticket is booked");
				printf("\n your seat number is:%d",*sec);

				strcpy(r.s[*i].t_class,"Second class class");
				r.s[*i].t_num=(*sec);



		        print(r,*i);

				printf("\n your class:Second class");
				printf("\n  your seat number:%d",*sec);
				(*i)++;
				(*sec)--;
				r.secondCls=(*sec);
				return r;
			}
	    break;
    case 3:
        if((*thrd)==0)
			{
				printf("\n the tickets are not available");
			}

			else
			{
				r=get(r,*i);
				printf("\n your ticket is booked");
				printf("\n your seat number is:%d",*thrd);

				strcpy(r.s[*i].t_class,"Third class");
				r.s[*i].t_num=(*thrd);



		         print(r,*i);

				printf("\n your class:Third class");
				printf("\n  your seat number:%d",*thrd);
				(*i)++;
				(*thrd)--;
				r.thirdCls=(*thrd);
				return r;
			}
			break;
	default:
	    break;
	}
}
struct rail get(struct rail r,int i)
{
                printf("\n Enter your name:");
				scanf("%s",r.s[i].name);
				printf("\n enter mobile number:");
				scanf("%s",r.s[i].mobNo);
				printf("\n enter mail id :");
				scanf("%s",&r.s[i].emailid);
				return r;


};
	void print(struct rail r,int i)
   {
      long int j=0;
      printf("\n .....please wait your ticket is being processed.....");
      for(j=0;j<=100000;j++);

      printf("\n *****IRCTC RAIL CONNECT *****\n    *****TICKET*****");
				printf("\n Train number   :%ld",r.no);
				printf("\n Name           :%s",r.s[i].name);
				printf("\n Mobile number  :%s",r.s[i].mobNo);
				printf("\n Mail id        :%s",r.s[i].emailid);
				printf("\n Your Class     :%s",r.s[i].t_class);
				printf("\n Your ticket no :%d",r.s[i].t_num);
  }

void availablity_checking()
{
    return;
}
