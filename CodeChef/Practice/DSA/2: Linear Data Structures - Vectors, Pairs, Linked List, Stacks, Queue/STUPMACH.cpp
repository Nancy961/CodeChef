#include <bits/stdc++.h>
#include <algorithm> 
using namespace std;

int main() 
{
      int T;  cin>>T;
      if(T<1 || T>100) exit(0);
      while(T--)
      {
            long long i, N;  
            cin>>N;
            long long S[N];
            cin>>S[0];
            long long  x=S[0] , count= S[0]; 
            for(i=1;i<N;i++)
            {
                  cin>>S[i];
                  x = std:: min(x,S[i]);
                  count += x;
            }
            cout<<count<<endl;
      }
      return 0;
}
