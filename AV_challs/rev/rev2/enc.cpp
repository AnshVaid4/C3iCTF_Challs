//Simple C++ program to encrypt and decrypt a string

#include <iostream>
using namespace std;

int main()
{
   int a[][5]={{118,86,194,230,148},{86,216,212,82,122},{156,86,184,134,124},{136,112,190,160,234}};
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
   		
   		a[i][j]=(a[i][j]/2)+8;
		cout<<(a[i][j])<<" ";
		   
	   }  
	   //decode a[i][j]=(a[i][j]/2)+8;    encode a[i][j]=(a[i][j]-8)*2;
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
