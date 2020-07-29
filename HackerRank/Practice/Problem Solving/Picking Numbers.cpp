#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a) {
    sort(a.begin(),a.end());
    int j=1, arr=0, k = a[0];

    for(int i=1;i<a.size();i++){
        if(a[i] == a[i-1] || a[i] == k+1){
            j++;
        }
        else{
            arr = max(arr, j);
            j=1;
            k = a[i];
        }
    }
    arr = max(arr, j);
    return arr;
}

int main()
{
    int n; cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    cout << pickingNumbers(a) << "\n";
    return 0;
}


