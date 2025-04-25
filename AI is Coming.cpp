#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
if (x >= 1 && x <= 100) {
        if (x <= 60) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "Invalid input";
    }
return 0;
}

