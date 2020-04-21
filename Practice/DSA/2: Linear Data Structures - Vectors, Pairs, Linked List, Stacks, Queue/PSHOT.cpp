#include <bits/stdc++.h>

using namespace std;
int main()
{
	int T;  cin>>T;
	while(T--)
	{
		int N;  string s;
		cin>>N>>s;
		
		int X=N, Y=N, A=0, B=0, flag=2*N;
		
		for(int i=0;i<s.size();i++)
		{
			if(i%2==0)
      {
				X--;
				if(s[i]=='1') A++;
				if((B-A)>X || (A-B)>Y){
					flag=i+1;
					break;
				}	
			}
			else
			{
				Y--;
				if(s[i]=='1') B++;
				if((A-B)>Y || (B-A)>X){
					flag=i+1;
					break;
				}
			}
		}
		cout << flag << endl;
	}
  return 0;
}
