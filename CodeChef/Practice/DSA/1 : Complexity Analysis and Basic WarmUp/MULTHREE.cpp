#include <iostream>
using namespace std;

int main() 
{
      int T;  cin>>T;
      while(T--)
      {
          long long k, total =0;
          int d0, d1;
          cin>>k>>d0>>d1;
          int sum= d0+d1; 

          if(k==2) 
              total= sum;
          else if(k==3) 
              total = sum + (sum%10);
          else
          {
              int sum_of_each_cycle = ((2*sum)%10 + (4*sum)%10 + (8*sum)%10 + (6*sum)%10);
              long long no_of_cycles = (k-3)/4;

              total = sum + (sum%10) + (no_of_cycles*sum_of_each_cycle);
              int remaining_digits = (k-3) - 4*no_of_cycles;
              int x=2; 

              for(int i=0;i<remaining_digits; i++)
              {
                  total += ((x*sum)%10);
                  x= (x*2)%10;
              }
          }
          if(total%3 == 0) cout<<"YES\n";
          else             cout<<"NO\n";
    }       
    return 0;
}
