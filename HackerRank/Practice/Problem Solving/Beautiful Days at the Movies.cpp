#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int beautifulDays(int i, int j, int k) {
    int count = 0;
    for(int x = i; x<=j; x++){
        int num = x, rem = 0, reverse= 0; 
        while(num!=0){    
            rem=num%10;      
            reverse=reverse*10+rem;    
            num/=10;    
        } 
        if((abs(x - reverse))%k == 0)   count++;
    }
    return count;
}

int main()
{
    int i,j,k;
    cin>> i >> j >> k;
    cout << beautifulDays(i, j, k) << "\n";
    return 0;
}

