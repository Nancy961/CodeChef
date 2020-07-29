#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    int height = 2;
    if(n==0) height =1;
    else if(n==1) height =2;
    else{
        for(int i=2;i<=n;i++){
            if(i%2==0) height++;
            else height *=2;
        }
    }return height;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << utopianTree(n) << "\n";
    }
    return 0;
}
