#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector<int> h, string word) 
{
    int height =0, n=word.length();
    for(int i=0; i<n; i++)
    {
        int x = word[i] - 97;
        height = max(height,h[x]);
    }
    return (height * n);
}

int main()
{
    vector<int> h;
    for (int i = 0; i < 26; i++) {
        int hi; cin >> hi;
        h.push_back(hi);
    }

    string word;
    cin>> word;

    cout << designerPdfViewer(h, word) << "\n";

    return 0;
}
