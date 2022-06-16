#include<iostream>
using namespace std;
int main()
{
	int a,T,i,n,p,j;
	a=1;
	cin>>T;
	while(a<=T)
	{
		cin>>n>>p; 
        int day[n+1]={0},hi=0,h[p]={0};
        
        for(i=0;i<p;i++)
        {
        	cin>>h[i]; 
        	int fr=6,sa=7; 
        	
        	for(j=1;j<n+1;j++)
        	{
        		if(j%h[i]==0&&((j!=fr)&&(j!=sa))) 
        		{
        			day[j]++;
				}
				
				else if(j==fr) 
				{
					fr=fr+7;
				}
				
				else if(j==sa) 
				{
					sa=sa+7;
				}
			}
		}
		
        for(i=1;i<n+1;i++)
        {
        	if(day[i]>0)
        	{
        		hi++;
			}
		}
		
        cout<<"總天數為: "<<hi<<endl;
	}
	
	return 0;
} 
