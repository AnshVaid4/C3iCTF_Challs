//Simple C++ program to encrypt and decrypt a string

#include <iostream>
using namespace std;

int main()
{
//   int a[][6]={{67 ,51 ,105, 67 ,101 ,110},{ 116 ,101 ,114, 123 ,70, 108 },{52, 71 ,95 ,82 ,51 ,116 },{114 ,49 ,69 ,86 ,52, 33 },{95, 99, 48, 109, 80, 125}};
   int a[][6]={{118, 86, 194 ,118, 186, 204},{ 216 ,186, 212 ,230 ,124 ,200 },{88, 126 ,174, 148, 86, 216},{212, 82, 122, 156, 88, 50 },{174 ,182, 80 ,202 ,144 ,234}};
   //    
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
   	for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
   	{
   		cout<<char(a[i][j]);
	   }   
   }

   cout<<"\n";
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
   	for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
   	{
   		
//   	a[i][j]=(a[i][j]-8)*2;
		a[i][j]=(a[i][j]/2)+8;
		cout<<(a[i][j])<<" ";
		   
	   }  
	   
   }
   cout<<"\n";
   for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
   {
   	for(int j=0;j<sizeof(a[i])/sizeof(a[i][0]);j++)
   	{
   		cout<<char(a[i][j]);
	   }   
   }
   
   return 0;
}
