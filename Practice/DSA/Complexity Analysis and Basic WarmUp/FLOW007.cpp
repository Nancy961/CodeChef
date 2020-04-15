#include <iostream>
using namespace std;

int main() {
	int i,T,N,rev_N;
	cin>>T;
	for(i=0;i<T;i++){
	    cin>>N;
	    rev_N =0;
	    while(N>0){
	        rev_N= rev_N*10 + N%10;
	        N = N/10;
	    }
	    cout<<rev_N<<endl;
	}
	return 0;
}
