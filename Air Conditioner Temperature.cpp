#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(a<=b && c<=b){
	        cout<<"Yes"<<"\n";
	    }
	    else{
	        std::cout << "No" << std::endl;
	    }
	}

}
