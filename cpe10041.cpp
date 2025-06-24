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
		sort(B,B+b);//新東西自動排序 要有#include<algotithm> 
		int c=B[b/2];//找中位數 
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
