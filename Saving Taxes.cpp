#include<iostream>
using namespace std;
int main(){
int t,x,y;
cin>>t;
for(int i=1;i<=t;i++){
      cin>>x>>y;
 if (y >= 1 && y<x && x<= 100){
            cout << x-y<< endl;
        }
     else {
        cout << "Invalid input"<< endl;
    }
}

return 0;
}





