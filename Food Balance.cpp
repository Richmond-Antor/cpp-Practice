#include<iostream>
using namespace std;

int main(){
int f1, p1, f2, p2;
cin>>f1>>p1>>f2>>p2;
if(f1>=1 && f1<=100 && p1>=1 && p1<=100 && f2>=1 && f2<=100 && p2>=1 && p2<=100){
    if((f1-p1) <(f2-p2)){
       cout<<"First";
       }
    else if((f1-p1)==(f2-p2)){
        cout<<"Both";

    }
    else{
        cout<<"Second";
    }



}
else{
    cout<<"Invalid input";
}
return 0;
}
