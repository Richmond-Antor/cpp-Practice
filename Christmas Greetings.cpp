#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
if(x>=1 && x<=31){
    if(x==25){

        cout<<"CHRISTMAS";
    }
    else{
        cout<<"ORDINARY";
    }
}
else{
     cout<<"INVALID DATE";
}



return 0;
}
