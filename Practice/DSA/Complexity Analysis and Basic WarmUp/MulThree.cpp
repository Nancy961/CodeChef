#include <iostream>
using namespace std;

int main() {
	int T; cin>>T;
	while(T--){
	    
	    long int k, d0, d1;
	    cin>>k>>d0>>d1;
	    long int sum= d0+d1;
      
	    for(int i=2;i<k;i++){
	        long int digit = 0;
	        digit +=sum%10;
	        sum += digit;
	    }
	    if(sum%3 == 0) cout<<"YES";
	    else cout<<"NO";
	}       
	return 0;
}
