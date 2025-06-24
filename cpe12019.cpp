#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int c,d,e;
		cin>>c>>d;
		int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		string week[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
		for(int i=0;i<c;i++)
		{
			e=e+day[i];
		}
		e=e+d-1;
		cout<<week[(e%7)]<<endl;
		e=0;
	}
	
return 0;
 } 
