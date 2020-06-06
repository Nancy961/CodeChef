#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, n, result=0; 
    cout<<"x"<<" \n";
    cin>>n;
    long long sum = (n*(1+n))/2;
    for(int i=0; i<n-1; i++){
        cin>>a;
        result +=a; 
    }
    cout<<sum-result<<endl;
    return 0;
}
