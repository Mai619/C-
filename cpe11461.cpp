#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,d;
	float c;
	d=0;
	while(cin>>a>>b)
	{
		if(a==0||b==0)
		{
			break;
		}
		for(int i=a;i<=b;i++)
		{
			c=sqrt(i);
			if(c==(int)c)
			{
				d=d+1;
			}
		}
		cout<<d<<endl;
	}
	d=0;
	
return 0;
}
