#include<iostream>
//typedef is use for alias a variable type
//we can also use 'using'
//typedef std::string text_t;
//typedef int num_t;
using text_t= std::string;
using num_t= int;
main(){

    text_t fname="Antor";
    num_t num1=52;
    std::cout<<fname;
std::cout<<num1;
}
