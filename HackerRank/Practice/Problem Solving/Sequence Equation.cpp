#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

vector<int> permutationEquation(vector<int> p) {
    vector<int> sequence;
    for( int x=1; x<=p.size(); x++){
        for( int i=0; i<p.size();i++){
            if(p[i]==x){
                for( int j=0; j<p.size();j++){
                    if(p[j]==i+1){
                        sequence.push_back(j+1);
                        break;
                    }
                }
                break;
            }
        }
    }
    return sequence;
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> p;

    for (int i = 0; i < n; i++) {
        cin >> x;
        p.push_back(x);
    }

    vector<int> result = permutationEquation(p);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] <<"\n";
    }
    return 0;
}

