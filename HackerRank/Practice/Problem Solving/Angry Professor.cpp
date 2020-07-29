#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int> a) {
    string str = "YES";
    int count =0;
    for(int i=0; i<a.size(); i++){
        if(a[i]<=0) count++;
    }
    if(count>=k)
        str = "NO";
    return str;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin>> n >> k;
        vector<int> a;

        for (int i = 0; i < n; i++) {
            int a_item;
            cin >> a_item;
            a.push_back(a_item);
        }
        cout << angryProfessor(k, a) << "\n";
    }
    return 0;
}

  
