#include<iostream>
using namespace std;
int main()
{
	int a;
	long long int b;
	while(cin>>a>>b)
	{
		while(b>0)
		{
			b=b-a;
			a++;
		}
	a=a-1;
	cout<<a<<endl;
	}
return 0;
}
