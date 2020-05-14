#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;  cin>>T;
    while(T--)
    {
        int N, min=400,total=0;
        string origin;
        cin>>N>>origin;
        if(origin[0]=='I')	min =200;

        while(N--)
        {
              string contest;
              cin>>contest;
              
              if(contest[0]=='T') total += 300;
              else if(contest[0]=='B')
              {
                   int severity; cin>>severity;
                   total += severity;
              }
              else if(contest[8]=='W')
              {
                   int rank; cin>>rank;
                   total += 300;
                   if(rank<20)
                        total +=(20-rank);        
              }
              else   total += 50;
        }
        cout<<total/min<<endl;
   }
   return 0;
}
