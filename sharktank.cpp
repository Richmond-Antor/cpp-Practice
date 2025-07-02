#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
	    std::cin >> a>>b;
	    if((a*10)>(b*5)){
	        std::cout << "FIRST" << std::endl;
	    }
	    else if((a*10)<(b*5)){
	        std::cout << "Second" << std::endl;
	    }
	    else{
	        std::cout << "Any" << std::endl;
	    }
	}
}
