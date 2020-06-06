#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long row, column, num;
        cin>>row>>column;
        if(row<column){
            if(column%2 !=0)
              num = (column*column) - row + 1;
            else
              num = ((column-1)*(column-1)) + row;
        }
        else{
            if(row%2 ==0)
              num = (row*row)-column + 1;
            else
              num = ((row-1)*(row-1)) + column;
        }
        cout<<num<<"\n";
    }
}
