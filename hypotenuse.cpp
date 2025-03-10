#include<iostream>
#include<cmath>
int main(){
   double side1,side2;
   double c;
std::cout<<"enter the value of side1: ";
    std::cin>>side1;
   std::cout<<"\n Enter the value of side2: ";
    std::cin>>side2;
side1=pow(side1,2);
side2=pow(side2,2);
    c=sqrt(side1+side2);
    std::cout<<"\nhyptenuse of the triangle is :"<<c;
return 0;
}
