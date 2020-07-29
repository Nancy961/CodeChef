#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    int shared =5, liked = 2, total =2;
    for(int i = 1; i<n; i++){
        shared = 3*liked;
        liked = floor(shared/2);
        total += liked;
    }
    return total;
}

int main()
{
    int n;  cin >> n;
    cout << viralAdvertising(n) << "\n";
    return 0;
}
