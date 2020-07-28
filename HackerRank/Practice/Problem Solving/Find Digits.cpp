#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int count=0, num =n;
    while(num!=0){
        int rem = num%10;
        if(rem !=0 && n%rem==0) count++;
        num = (num-rem)/10;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;  
        cin >> n;
        cout << findDigits(n) << "\n";
    }
    return 0;
}
