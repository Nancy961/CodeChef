#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector<int> height) {
    sort(height.begin(),height.end());
    int dose = 0;
    if (height[height.size()-1] >k)
        dose = height[height.size()-1]  - k;
return dose;
}

int main()
{
    int n,k;
    cin>> n >> k;
    vector<int> height;

    for (int i = 0; i < n; i++) {
        int h;  cin>> h;
        height.push_back(h)
    }
    cout << hurdleRace(k, height) << "\n";
    return 0;
}

