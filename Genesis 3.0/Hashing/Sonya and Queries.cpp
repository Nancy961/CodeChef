// CODEFORCES A. Sonya and Queries - 713A
// https://codeforces.com/contest/713/problem/A

// Solution - https://ideone.com/VNnpuX

#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<ll,ll> m;

void BitQueries(char c, ll num){
	if(c == '?') cout<<m[num]<<endl;
	else if(c == '+'){
		ll x=0, y=1;
		while(num){
			if(num%2) x += 1*y;
			y *= 10; num /=10;
		}
		m[x]++;
	//	cout<<c<<" "<<x<<" "<<m[x]<<endl;
	}
	else if(c == '-'){
		ll x=0, y=1;
		while(num){
			if(num%2) x += 1*y;
			y *= 10; num /=10;
		}
	//	cout<<c<<" "<<x<<" "<<m[x]<<endl;
		m[x]--;
	}
}

int main() {
	int n; cin>>n;
	for(int i=0; i<n; i++){
		char s; ll num;
		cin>>s>>num;
		BitQueries(s,num);
	}
	return 0;
}