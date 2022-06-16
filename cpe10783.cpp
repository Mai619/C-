#include<iostream>
 using namespace std;
 int main()
 {
 	int T,a,b,i,j,k;
 	cin>>T;
 	for(i=1;i<=T;i++)
 	{
 		cin>>a;
 		cin>>b;
 		j=0;
 		for(a>0;a<=b;a++)
 		{
 			if(a%2==1)
 			{
 				j=j+a;
			}
			else
			{
				j=j+0;
			}
		}
		cout<<"Case"<<i<<" "<<j<<endl;
	}
	return 0;
 }
