#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long max=1,count=1;
    for(long long i=1; i<s.size(); i++){
        if(s[i]==s[i-1]){
            count++;
            if(count>max)
                max= count;
    	}
        else  count = 1;      
    }
    cout<<max<<"\n";
}

/* QUESTION :

You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input - The only input line contains a string of n characters.

Output - Print one integer: the length of the longest repetition.

Constraints - 1≤n≤106
Example -
          Input   :    ATTCGGGA
          Output  :    3
*/
