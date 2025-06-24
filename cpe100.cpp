#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	while(cin>>a>>b)
	{
		d=0;
		for(int i=min(a,b);i<=max(a,b);i++)
		{
			c=1;
			int n=i;
			while(n>1)
			{
				if(n%2==0)
				{
					n=n/2;
				}
				else
				{
					n=3*n+1;
				}
				c++;	
			}
			d=max(d,c);	
		}
		cout<<a<<" "<<b<<" "<<d<<endl;
	}
	
return 0;
 } 
