#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string a;
	while(cin>>a)
	{
		if(a=="0")
		{
			break;
		}
		int odd=0;
		int even=0;
		for(int i=0;i<a.length();i++)
		{
			if(i%2==1)
			{
				odd=odd+a[i]-'0';
			}
			else
			{
				even=even+a[i]-'0';
			}
		}
		if(abs(odd-even)%11==0)
		{
			cout<<a<<" is a multiple of 11."<<endl;
		}
		else
		{
			cout<<a<<" is not a multiple of 11."<<endl;
		}
	}
	
return 0;
}
