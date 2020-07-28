#include <bits/stdc++.h>

using namespace std;

int squares(int a, int b) {
    int count =0;
    for(long long int i=a; i<=b; i++)
    {
        long double x = sqrt(i);
        if((x - floor(x))==0)  {  
            count++;
            i += 2*x;
        }
    }
    return count++;
}

int main()
{
    int q;
    cin >> q;
   
    while(q--) {
        int a,b;
        cin >> a >> b;
        cout << squares(a, b) << "\n";
    }
    return 0;
}

