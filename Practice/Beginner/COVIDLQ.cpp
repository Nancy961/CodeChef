#include <iostream>
using namespace std;

int main() {
      int T; cin>>T;
      while(T--)
      {
        int N; cin>>N;
        int A[N],B[N];
        int j=0, flag=0;

        for(int i=0;i<N; i++){
            cin>>A[i];
            if(A[i]==1)
                B[j++]=i;
        }

        for(int i=j-1;i>0; i--)
        {
            if(B[i]-B[i-1] <6){
                flag=1;
                break;
            }
        }

        if(flag==1) cout<<"NO\n";
        else cout<<"YES\n";

      }
    return 0;
}
