#include <bits/stdc++.h>
using namespace std;

int main() 
{
    unsigned long long int DP[51][51] ={0};
    for(int i=0;i<51;i++)
    {
        DP[i][0] = 1;
        DP[i][i] = 1;    
    }
    for(int i=2;i<51;i++)
    {
        for(int j=1;j<i;j++)
            DP[i][j] = DP[i-1][j-1] + DP[i-1][j]; 
    } 
    int T;  cin>>T;
	  while(T--)
    {
	    int N,K; 
      cin>>N>>K;
	    long long arr[N];
	    for(int i =0; i<N;i++)
	        cin>>arr[i];
	    
      sort(arr,arr+N);
	    
	    long long x=0, min=0, count = 0, max = arr[K-1];
	  
	    for(int i =0; i<K; i++)
      {
	        min +=arr[i] ;        //minimum sum
	        if(arr[i]==max){ 
            count++; 
            x++; 
          }
	    }
	    for(int i =K; i<N; i++)
      {
	        if(arr[i]==max) 
            count++;
	    }
	    cout<<DP[count][x]<<endl;
	}
	return 0;
}

    
