#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		int c,carry,carry2;
		carry=0;
		carry2=0;
		while(a>0||b>0)
		{
		c=((a%10)+(b%10)+carry);
			if(c>=10)
			{
				carry=1;
				carry2=carry2+1;
			}
			else
			{
				carry=0;
			}
			
			a /=10;
			b /=10;
		}
		if(carry2==0)
		{
			cout<<"No carry operation."<<endl;
		}
		else if(carry2==1)
		{
			cout<<"1 carry operation."<<endl;
		}
		else
		{
			cout<<carry2<<" carry operations."<<endl;
		}
	}
	
return 0;
}
