
#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
  if (1 <= a && a <= 5000 && 1 <= b && b <= 5000) {
        if (a>b) {
            cout << a-b;
        } else {
            cout << 0;
        }
    } else {
        cout << "invalid input";
    }
return 0;
}
