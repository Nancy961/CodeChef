#include <iostream>
using namespace std;

int main() 
{
      long long T;  
      cin>>T;
      while(T--)
      {
          long long N;  
          cin>>N;
          long long S, V, P,  profit=0, max=0;
          for(int i=0;i<N;i++)
          {
                cin>>S>>P>>V;
                profit  = ((P/(S+1))* V) % 1000000007;
                if(profit>max)
                     max = profit;
          }
          cout<<max<<endl;
    }
    return 0;
}
