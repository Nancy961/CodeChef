#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

string catAndMouse(int x, int y, int z) {
    string str = "Cat A";
    if(abs(x-z)==abs(y-z))
        str = "Mouse C";
    else if(abs(x-z)>abs(y-z))
        str = "Cat B";
    return str;
}

int main()
{
    int q;
    cin >> q;
    while(q--) {
        
        int x, y, z; 
        cin >> x >> y >> z;
        cout << catAndMouse(x, y, z) << "\n";
    }
    return 0;
}

