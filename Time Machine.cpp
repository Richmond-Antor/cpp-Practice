#include<iostream>
using namespace std;
int main(){
int x;
cin>>x;
if(x>=200 && x<=2050){

    if(x+25>=2050){

        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


}
else{
    cout<<"Invalid input";
}



return 0;
}
