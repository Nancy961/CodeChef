#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;  cin>>t;
	while(t--)
	{
		string s;   
    cin>>s;
		long count=0,ans=0;
		for(long long i=0;i<s.length();i++)
		{
			if(s[i]=='<')	
        count++;
			else            	
        count--;

			if(count<0) 
        break;
			if(count==0)
				ans=i+1;
		}
		cout<<ans<<endl;
		
	}
}
