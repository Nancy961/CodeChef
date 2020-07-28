#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string str,colon =":";
    string hh =s.substr(0,2);
    string mm =s.substr(3,2);
    string ss =s.substr(6,2);
    int h = stoi (hh);
    if(s[8]=='A'&&(h==12)){
        hh="00";
    }

    else if(s[8]=='P'&&(h!=12)) {
        h +=12;
        hh = to_string(h);
    }
    str.append(hh);
    str.append(colon);
    str.append(mm);
    str.append(colon);
    str.append(ss);

    return str;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
