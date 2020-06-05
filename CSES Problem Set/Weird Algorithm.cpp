#include <bits/stdc++.h>
using namespace std;

void WeirdAlgo(long long n){
    cout<<n<<" ";
    if(n>1){
        if(n%2 == 0)
            n=n/2;
        else
            n= n*3 + 1;
        WeirdAlgo(n);
    }      
}

int main(){
    long long n;
    cin>>n;
    WeirdAlgo(n);
    return 0;
}
