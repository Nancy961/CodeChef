#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    if(T<1||T>25) 
        exit(0);
    while(T--)
    {
        long long N;   cin>>N;
        long long price[N];

        for( long long i=0;i<N;i++)
            cin>>price[i]; 

        sort(price,price+N, greater<long long>());
          long long  revenue =0; 

        for(long long i=0;i<N;i++)
        {
            if((price[i]-i)>=0)
                revenue =(revenue + price[i] - i) % 1000000007;
            else break;
          }
        cout<<revenue<<endl;
    }
    return 0;
}
