#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s) {
    
    long long int num = (s-1 +(m%n));
   
    if(num>n) num %=n;  
    if(num == 0)  num = n;    
    
    return num;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n,m, s;
        cin>> n >> m >> s;
        cout << saveThePrisoner(n, m, s) << "\n";
    }
    return 0;
}


