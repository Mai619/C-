#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a;
	e=1;
	while(a>=e)
	{
		cin>>b>>c;
		d=0;
		for(int i=b;i<=c;i++)
		{
			if(i%2==1)
			{
				d=d+i;
			}
		} 
		cout<<"Case "<<e<<": "<<d<<endl;
	}
	
return 0;
}
