#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    long long int i,count = 0, valley = 0;
    for(i=0;i<n;i++){
        if(s[i]=='U') {
            count++;
            if(count==0)    
                valley++;
        }
        else    
          count--;
    }
    return valley;
}

int main()
{
    int n;
    cin >> n;
    string s;
    getline(cin, s);

    cout << countingValleys(n, s) << "\n";
    
    return 0;
}
