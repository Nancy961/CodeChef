#include <bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year) {
    string date;
    if(year==1918){
        date=  "26.09.";
    }
    else if((year>1918) && (((year%4==0) && (year%100!=0)) || (year%400==0))){
        date = "12.09.";
    }
    else if((year<1918)&&(year%4==0))   date = "12.09.";
    else date= "13.09.";
    date.append(to_string(year));
    
    return date;

}

int main()
{
    int year; cin >> year;
    cout << dayOfProgrammer(year) << "\n";

    return 0;
}
