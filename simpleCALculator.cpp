#include<iostream>
using namespace std;
int main(){
char op;
double num1;
double num2;
double result;

cout<<"*****************CALCULATOR*********************\n";



cout<<"enter #1:";
cin>>num1;

cout<<"enter either(+ - * /): ";
cin>>op;

cout<<"enter #2:";
cin>>num2;




switch(op){

case '+' :
    result= num1 + num2;
    cout<<"result: "<<result;
break;
case '-' :
    result=num1-num2;
    cout<<"result: "<<result;
    break;
case '*' :
    result=num1*num2;
    cout<<"result: "<<result;
    break;
case '/' :
    result=num1/num2;
    cout<<"result: "<<result;
    break;

default:
    cout<<"error! please choose valid operators (+-*/)";
break;

}
cout<<"\n****************************************************";
return 0;
}
