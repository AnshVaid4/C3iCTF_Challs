#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

void arr()
{
	cout<<"none";
}

void sort()
{
	int a[][6] = {{67,51,105,67,101,110},{116,101,114,123,84,104},{51,95,107,51,89,99},{111,109,112,114,79,109},{95,105,115,51,68,125}};
		//    
		int count=0;
		for(int x=0;x<sizeof(a)/sizeof(a[0]);x++)
		{
			for(int y=0;y<sizeof(a[x])/sizeof(a[x][0]);y++)
				cout<<char(*(*(a+x)+y));
		}
}

int rev(int x)
{
	x=23*rand();
	if (x<5)
	{
		x=23*rand();
	}
}


int init(int x)
{
	int *y;
	y=&x;
	
	return *y;
}

bool get()
{
	int f=24;	//notes
	cout<< "Try again";
}

void find()
{
	int x[23]={54,45,34,32,45,21,1,34,65,34,56,55,76,78,97,54,56,88,99,54,23,45,2};  //notes
	int f=24;
	bool y=get();
}

int third(int x)
{
	int num=(rand()%3);
	while (num==0)
	{
		num=(rand()%3);
	}
	x=x+int('*')+num;
	x=init(x);
	
	return(x);
}


void v0id(int a, int b, int c,int d)
{
	int ss=a*b*b/(3*a);
	if (ss == d)
	{
		sort();	
	}
	
	else
	{
		find();
	}	
}
	


int main()
{
	
	
	int a,b,c;
	int *d;
	d=&b;
	cout<<"Let's check your luck.\nThere will be three numbers where first two numbers\nwillbe entred\
	by you and the third number will be random system generated. The total should be 853. Values should\n\
	be greater than 0. You get the flag once you solve the \"Secret Challenge\".\n\n";
	
	cout<<"\nEnter first number: ";
	cin>>a;
	if (a>0)
	{
		cout<<"\nEnter second number: ";
		cin>>*d;
		if (*d >0)
		{
			c=third(b);	
			cout<<"\nThird number is: "<<c;
			
			int x[3]={a,(*d),c};
			*d=*x+*(x+1)+*(x+2);
			cout<<"\n\nSum: "<<*d;
			if (*d == 853)
			{
				int gss;
				cout<<"\nEnter the password: ";
				cin>>gss;
				v0id(a,b,c,gss);
			}
		}
		
	}
	
	getch();	
	
}
