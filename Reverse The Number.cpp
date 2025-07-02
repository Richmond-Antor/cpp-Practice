#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	for (int i = 0; i < t; i++)
	    
	{
	    
	    cin>>n;
	    int r=0;
	    while(n>0){
	    r=r*10 +(n%10);
	    n/=10;
	    }
	    std::cout << r << std::endl;
	    
	    
	    
	}

}
