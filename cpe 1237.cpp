#include <iostream>
using namespace std;
struct JQK 
{
    char name[10];
    int a;
    int b;
};
int main()
{
	int i,j;
	j=1;
	cin>>i;
	while(j<=i&&i<=10)
	{
		int SPY;
		cin>>SPY;
    	JQK who[SPY];
    	int k;
    	for(k=0;k<SPY;k++)
		{
        	cin>>who[k].name;
        	cin>>who[k].a;
        	cin>>who[k].b;
        	cout<<endl;
    	}
    	int l,m,n,c;
    	m=1;
    	cin>>l;
    	while(m<=l)
    	{
    		cin>>n;
    		c=0;
    		for(k=0;k<SPY;k++)
    		{
    			if(who[k].a<=n&&who[k].b>=n)
    			{
    				c=c+1;
				}
			}
			if(c==0||c>1)
				{
					cout<<"UNDETERMINED";
					cout<<endl;
				}
			else
			{
				for(k=0;k<SPY;k++)
				{
					if(who[k].a<=n&&who[k].b>=n)
				{
					cout<<who[k].name;
    				cout<<endl;
				}	
				}
			}
		m++;
		}
	j++;
	}
	
	
return 0;
}
