#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int a;
	cin>>a;
	while(a--)
	{
		int b;
		cin>>b;
		int*B=new int [b];
		for(int i=0;i<b;i++)
		{
			cin>>B[i];
		}
		sort(B,B+b);//�s�F��۰ʱƧ� �n��#include<algotithm> 
		int c=B[b/2];//�䤤��� 
		long long int d;
		d=0;
		for(int i=0;i<b;i++)
		{
			d=d+abs(c-B[i]);
		}
		
	cout<<d<<endl;
	}
	
return 0;
}
