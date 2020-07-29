#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(),keyboards.end());
    sort(drives.begin(),drives.end());
    long long int ans = -1, total = 0;
    if((keyboards[0]+drives[0])>b)  
        ans = -1;
    else{
        for(int i=0;i<keyboards.size();i++)
        {
            if(keyboards[i]<b)
            {
                for(int j=0;j<drives.size();j++)
                {
                    if(drives[j]<b)
                    {
                        total = keyboards[i]+drives[j];
                        if(total==b)
                        {
                            ans = total; 
                            break;
                        }
                        else if(total<b){
                            ans = max(total,ans);
                        }
                        else break;    
                    }   
                    else break; 
                }
            }
            else break;
        }
    }
    return ans;
}

int main()
{
    int b, n, m;
    vector<int> keyboards;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        keyboards.push_back(x);
    }

    vector<int> drives;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        drives.push_back(x);
    }

    cout << getMoneySpent(keyboards, drives, b) << "\n";

    return 0;
}


