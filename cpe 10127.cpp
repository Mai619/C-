#include<iostream>
using namespace std;
int main()
{
	int i,j,l,m;
	long long k;
	while(cin>>i)
	{
		k=1;
		j=1;
		m=1;
		l=k%i;
		while(l>0)
		{
			m=m+1;
			k=k*10+1;
			l=k%i;
		}
		cout<<m<<endl;
	}
	
	return 0;
}
