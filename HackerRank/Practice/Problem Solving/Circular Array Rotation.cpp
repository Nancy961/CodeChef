#include <bits/stdc++.h>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<long long int> arr;
    vector<int> ans;
    long long int i=0,j=0, n = a.size();
    
    for( i =0; i<n; i++){
        arr.push_back(a[(i+n-(k%n))%n]);
    }
    for( i=0; i<queries.size(); i++){
        j = queries[i];
        ans.push_back(arr[j]);
    }
    return ans;
}

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a;

    for (int i = 0; i < n; i++) {
        int x;
        cin>> x;
        a.push_back(x);
    }

    vector<int> queries;

    for (int i = 0; i < q; i++) {
        int x;
        cin>> x;
        queries.push_back(x);
    }

    vector<int> result = circularArrayRotation(a, k, queries);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }
    return 0;
}
