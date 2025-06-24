#include<iostream>
#include<cmath>
#include<array>
using namespace std;
int main()
{
	int a;
	while(cin>>a)
	{
		int*A=new int [a];
	 	int B[4]={1,3,5,7};
		int b=0;
		int c=0;
		for(int i=0;i<a;i++)
		{
			cin>>A[i];
			b=b+i;
		}
		int d=0;
		for(int i=0;i<a;i++)
		{
			if(A[i]==B[i])
			{
				d=d+1;
			}
			if(d==4)
			{
				c=-1;
				break;
			}
		}
		for(int i=1;i<a;i++)
		{
			c=c+abs(A[i-1]-A[i]);
		}
		if(b==c)
		{
			cout<<"Jolly"<<endl;
		}
		else
		{
			cout<<"Not jolly"<<endl;
		}
	}
	
return 0;
}
