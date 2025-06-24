#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	while(a--)
	{
		cin>>b;
		int*A=new int[b];
		for(int i=0;i<b;i++)
		{
			cin>>A[i];
		}
		c=0;
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(A[j]>A[j+1])
				{
					swap(A[j],A[j+1]);
					c=c+1;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
		delete A;
	}
	
return 0;
}
