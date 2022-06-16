#include<iostream>
using namespace std;
int main()
{
	int x1,x2,y1,y2,a1,a2,b1,b2;
	int i,j,k,l,k1,l1,m,n;
	cout<<"輸入測資數量";
	cin>>i;
	for(j=0;j<i;j++)
	{
		cin>>x1>>y1>>x2>>y2;
		cout<<endl;
		cin>>a1>>b1>>a2>>b2;
		cout<<endl;
		if(x1<=0||y1<=0||a1<=0||b1<=0)
		{
			cout<<"error";
		}
		if(x2>100||y2>100||a2>100||b2>100)
		{
			cout<<"error";
		}
		k=(x2-x1)*(y2-y1);
		l=(a2-a1)*(b2-b1);
		k1=0;
		l1=0;		
		if(x2>a1&&y2>b1)
		{
			k1=k1+(x2-a1)*(y2-b1);
			l1=l1+k+l-2*k1;
			m=(100*100)-k1-l1;	 
		}
		if(x2<=a1&&y2<=b1)
		{
			l1=k+l;
			m=(100*100)-l1;	
		}
	cout<<"Night"<<" "<<j+1<<" : "<<k1<<" "<<l1<<" "<<m;
	}
	
	return 0;
}
