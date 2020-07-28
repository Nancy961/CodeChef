#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
                                              
vector<int> cutTheSticks(vector<int> arr) {
    
    vector<int> sticks;
    int n= arr.size();
    sticks.push_back(n);
    sort(arr.begin(), arr.end());
    
    for(int i =0; i<n-1; i++){
        int count =1, x = arr[i];
        for(int j =i; j<n; j++){
            if((j<n-1)&&(arr[j+1]==x)){   
                count++; i++;
            }
            arr[j] -= x;
        }
        if((n-i-1)>0)
            sticks.push_back(n- 1-i);
    }
    return sticks;
}


int main()
{
    int x,n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        cin>>x;
        arr.push_back(x);
    }

    vector<int> result = cutTheSticks(arr);

    for (int i = 0; i < (int)result.size(); i++) {
        cout<< result[i]<<"\n";
    }
    return 0;
}
