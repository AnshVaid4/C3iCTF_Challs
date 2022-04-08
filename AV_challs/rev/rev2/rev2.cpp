#include <iostream>
#include <conio.h>
#include <cstring>
#include <conio.h>
using namespace std;

int x=0;
int y=0;
void p4y();

void pay(char x)
{
	if (x=='N' || x == 'n')
	{
		cout<<"\nNo problem. Come again later";
		cout<<"\nBut my coffee :(";
	}
	else if (x=='Y' || x == 'y')
	{
		p4y();
	}
	else
	exit(0);
}

void ConPanna(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}

void search(int r)
{
	cout<<"\n\nWow that is my favourite coffee. \nBut I have these numbers. Maybe this was the thing you were looking for. I have the encoding script, I believe you can decode it yourself.\n";
			int a[][5]={{118,86,194,230,148},{86,216,212,82,122},{156,86,184,134,124},{136,112,190,160,234}};
			for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
			{
				for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
				{
					cout<<a[i][j]<<" ";
				}
			}
			
			//I used the following script to encde the ASCII values of flag and get the above array.
//			for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
//		   {                 
//		   	for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
//		   	{
//		   		
//		   		a[i][j]=(a[i][j]/-8)*2;
//				cout<<(a[i][j])<<" ";
//				   
//			   }  
//		   }
}

void p4ym()
{
	char c[13]={'A','=','1','@','c','0','2','X','M','K','#','8'};
	string x;
	cout<<"\nEnter you secret key to do members only payment: ";
	cin>>x;
	
	int n=x.length();
	char ca[n];
	strcpy(ca, x.c_str());

	if(n==sizeof(c)/sizeof(c[0])-1)
	{
		for(int i=0;i<sizeof(ca)/sizeof(ca[0]);i++)
		{
			if((c[i]^ca[i]) != 0)
			{
				::x=1;
				break;
			}
		}
		if(::x != 1  && ::y ==5)
		{
			int test=0;
			search(test);			
		}
		else if(::x != 1  && ::y !=5)
		{
			cout<<"Thanks for coffee. It will help keeping me awake.";
		}
		
	}
	else
	{
		cout<<"Wrong key. Find the key and try again.";
	}
	
}

void Cappuccino();
void Latte();
void Mocha();
void Cortado();
void FlatWhite();
void IrishCoffe();
void Macchiato();
void Affogato();

int main()
{

	cout<<"Buy me a coffee of 4$ please, I will pay you later.\n";
	int c;
	cout<<"\n  _(((_  Menu";
	cout<<"\n (_____) ";
	cout<<"\n  \\_C_/";
	cout<<"\n1. Cappuccino : 2$ ";
	cout<<"\n2. Latte      : 2$";
	cout<<"\n3. Mocha      : 3$";
	cout<<"\n4. Cortado    : 1$";
	cout<<"\n5. Flat White : 5$";
	cout<<"\n6. Irish Coffe: 3$";
	cout<<"\n7. Macchiato  : 4$";
	cout<<"\n8. Con Panna  : 2$";
	cout<<"\n9. Affogato   : 3$";
	cout<<"\n\nSlect the coffee: ";
	cin>>c;
	::y=c;
	switch(c)
	{
		case 1: Cappuccino();
			break;
			
		case 2: Latte();
			break;
			
		case 3: Mocha();
			break;
			
		case 4: Cortado();
			break;
			
		case 5: FlatWhite();
			break;
			
		case 6: IrishCoffe();
			break;
			
		case 7: Macchiato();
			break;
			
		case 8: ConPanna();
			break;
			
		case 9: Affogato();
			break;
		default: cout<<"\nSorry! we don't have such item";
	}
	
	
	getch();
}

void Cappuccino()
{
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}

void p4y()
{
	char c;
	
	cout<<"Do you want members only payment? We provide extra discount of 1$ to our members. (Y/y/N/n): ";
	cin>>c;
	if (c=='N' || c == 'n')
	{
		cout<<"\nThanks for buying coffee :)";
		cout<<"\nI will pay you through UPI.";
	}
	else if (c=='Y' || c == 'y')
	{
		p4ym();
	}
	else
	exit(0);
}
void Latte(){

cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}
void Mocha(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}
void Cortado(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}
void FlatWhite(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}
void IrishCoffe(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}
void Macchiato(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}

void Affogato(){
	cout<<"\nThanks for choosing Cappuccino!";
	char c;
	cout<<"\nDo you want to pay now?(Y/N): ";
	cin>>c;
	pay(c);
}
