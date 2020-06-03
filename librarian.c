#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void print();
void line();
int i,f;
struct library
{
	int days,sr,enro;
	char bname[20],sname[20],stream[20];
}s[100];
void main()
{
	int n,d,j,c,f,k;
	FILE *P;
	clrscr();
	while(1)
	{
	f=0;
	c=0;
	k=1;
	P=fopen("hi.txt","r");
	s[i].sr=i;
	for(i=1;i<100;i++)
	{
		fscanf(P," %d      %s       %s         %s    	  %d	       %d\n",&s[i].sr,s[i].bname,s[i].sname,s[i].stream,&s[i].enro,&s[i].days);
	}
	fclose(P);
	printf("*************************** WELCOME TO MY LIBRARY *****************************\n");
	printf("press 1 to enter a new entry\n");
	printf("\npress 2 to search an existing entry\n");
	printf("\npress 3 to exit\n");
	printf("\nenter 4 to view entries\n");
	printf("\nenter 5 to delete entry\n");
	printf("\nenter 6 to update data\n");
	line();
	printf("\n\nenter your choice  : ");
	scanf("%d",&n);
	printf("\n\n");
	line();
	if(n==1)
	{
		clrscr();
		line();
		printf("\n");
		printf("enter book code : ");
		scanf("%d",&i);
		s[i].sr=i;
		printf("enter name of book : ");
		scanf("%s",s[i].bname);
		printf("enter name of student : ");
		scanf("%s",s[i].sname);
		printf("enter your stream : ");
		scanf("%s",s[i].stream);
		printf("enter your enrollment number :");
		scanf("%d",&s[i].enro);
		printf("enter how many days student wants to keep book : ");
		scanf("%d",&s[i].days);



														line();
	}
	if(n==2)
	{
		clrscr();
		line();
		printf("\n");
		printf("enter book code whose entry you want to search : ");
		scanf("%d",&d);
		for(i=1;i<100;i++)
		{
			if(s[i].sr==d)
			{
				c=1;
				d=s[i].sr;
			}
		}
		if(c==1)
		{
			printf("\n\nresult found\n\n");
			printf("code    book    student    stream      enrollment     days\n\n");
			printf(" %d      %s       %s         %s    	  %d	       %d\n",s[d].sr,s[d].bname,s[d].sname,s[d].stream,s[d].enro,s[d].days);
			line();
		getch();
		}
		if(c==0)
		{
			clrscr();
			line();
			printf("\n");
			printf("sorry not found\n");
			line();
			getch();
		}
	}
	if(n==3)
	{
		clrscr();
		line();
		printf("\nGood bye\n");
		line();
		delay(1000);
		exit(0);
	}
	if(n==4)
	{
		clrscr();
		line();
		print();
		line();
		getch();
	}
	if(n==5)
	{
		clrscr();
		line();
		printf("\n");
		printf("enter book code");
		scanf("%d",&f);
		for(i=1;i<100;i++)
		{
			if(s[i].sr==f)
			{
				s[i].sr=0;
				k=0;
			}
		}
		if(k==0)
		{
			clrscr();
			line();
			printf("\n");
			printf("changes saved\n");
			line();
			getch();
		}
		else
		{
			clrscr();
			line();
			printf("\n");
			printf("sorry entry not found\n");
			line();
			getch();
		}
	}
	if(n==6)
	{
		P=fopen("hi.txt","w");
		for(i=0;i<100;i++)
		{
			if(s[i].sr!=0)
			{
				fprintf(P," %d      %s       %s         %s    	  %d	       %d\n",s[i].sr,s[i].bname,s[i].sname,s[i].stream,s[i].enro,s[i].days);
			}
		}
		fclose(P);
	}


	clrscr();

	}

}
void print()
{
	printf("code    book    student    stream      enrollment     days\n\n");
	for(i=1;i<100;i++)
	{
		if(s[i].sr!=0)
		{
		printf(" %d      %s       %s         %s    	  %d	       %d",s[i].sr,s[i].bname,s[i].sname,s[i].stream,s[i].enro,s[i].days);
		printf("\n");
		f=1;
		}

	}
	if(f==0)
		{
		printf("no record found");
		}
}
void line()
{
	printf("********************************************************************************");
}


