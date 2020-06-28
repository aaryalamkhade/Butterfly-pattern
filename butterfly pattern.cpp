#include<iostream>
using namespace std;

int main()
{
	/*int n,t;
	cout<<"enter the row value:";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
			t=j;
		}
		for(int k=2;k<(2*n-(i+t));k++)
		{
			cout<<" ";
		} 
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	int l=2*n;
	for(int i=n;i>0;i--)
	{  
		for(int j=0;j<i;j++)
		{
			cout<<"*";
			t=j;
			
		}
		
	   for(int k=0;k<10-l;k++)
	   {
	   	 cout<<" ";
	   }
	   l=l-2;
	   
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}*/
	int Rows;
	cout<<"enter the no of rows:";
	cin>>Rows;
	for(int i=1;i<=Rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
	
		for(int k=1;k<=Rows*2-i*2;k++)
		{
			cout<<" ";
		}
		for(int l=1;l<=i;l++)
		{
			cout<<"*";
		}	cout<<endl;
	}
	for(int i=0;i<Rows;i++)
	{  
		for(int j=Rows;j>i;j--)
		{
			cout<<"*";
		}
		for(int k=Rows*2;k>Rows*2-i*2;k--)
		{
			cout<<" ";
		}
		for(int j=Rows;j>i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
