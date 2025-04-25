#include<iostream>
using namespace std;
int main(){
int a,x,y;
cin>>a>>x>>y;
  if (1 <= a && a <= 100 && 1 <= x && x <= 100 && 1 <= y && y <= 100) {
        if (a <= x +y) {
            cout << "yes";
        } else {
            cout << "no";
        }
    } else {
        cout << "invalid input";
    }
return 0;
}
