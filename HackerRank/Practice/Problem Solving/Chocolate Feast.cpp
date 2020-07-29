#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    int bars = n/c;
    int wrappers = bars;
    while(wrappers>=m ){
        int newbars = wrappers/m;
        bars += newbars;
        wrappers += newbars - m*newbars;
    }
    return bars;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
       int n,c,m;
       cin >> n >> c >> m;

       cout << chocolateFeast(n, c, m) << "\n";
    }
    return 0;
}

