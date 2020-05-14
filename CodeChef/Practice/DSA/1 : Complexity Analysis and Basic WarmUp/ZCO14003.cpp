#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
      ll N, max=0;
      cin>>N;
      ll Budget[N];
      
      for(ll i=0;i<N;i++)
           cin>>Budget[i];
      
      sort(Budget,Budget+N);

      for(ll i=0;i<N;i++)
      {
          Budget[i]*=(N-i);
          if (Budget[i]>max)
              max=Budget[i];
      }
      cout<<max;
      return 0;
}
