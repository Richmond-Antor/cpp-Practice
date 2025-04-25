#include<iostream>
using namespace std;
int main(){
int A,B,C;
cin>>A>>B>>C;
if(A+B>C &&B+C>A && A+C>B) {
        cout<<"Yes";
}
else{
    cout<<"No";
}
return 0;
}
