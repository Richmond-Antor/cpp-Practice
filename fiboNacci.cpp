#include<iostream>
using namespace std;
//0 1 1 2 3 5 8 13
int main()
{
    int first=0, second=1;
    int num, next;
    cout<<"Enter the number of fibonacci sequence you want to print\n";
    cin>>num;
    cout<<"fibonacci sequence:"<<endl;
    for (int i=0;i<num;i++){


        cout<<first<<endl;
        next = first+second;
        first = second;
        second = next;


    }




    return 0;
}
