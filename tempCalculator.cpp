#include<iostream>
using namespace std;
int main(){
double temp;
char unit;
cout<<"\n********************Temperature Calculator**************************\n";
cout<<"f= ferenheit\n";
cout<<"C = celcius\n";
cout<<"What unit you would like to convert to?\n";
cin>>unit;

if (unit =='F' || unit=='f'){
    cout<<"Put the temperature in celcius value: ";
    cin>>temp;
    temp = (1.8 * temp)+32;

    cout<<"The temperature in farenheit is :"<<temp<<"F\n";

}
else if(unit=='c' || unit =='C'){

        cout<<"Put the temperature in farenheit value: ";
    cin>>temp;
    temp =(temp-32)/1.8;

    cout<<"The temperature in celcius is :"<<temp<<"C\n";

}
else{
    cout<<"Put a valid option!  C or F.";
}
cout<<"\n********************Temperature Calculator**************************";
return 0;
}
