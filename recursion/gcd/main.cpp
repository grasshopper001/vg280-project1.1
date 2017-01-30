//
// Created by sunyi on 2017/1/29.
//
#include <iostream>
unsigned long int gcd(unsigned long int a,unsigned long int b){
    if(a<b){
        unsigned long int temp=a;
        a=b;
        b=a;
    }
    if(a==(a/b)*b){return b;}
    else{
        unsigned long int c=a-(a/b)*b;
        return gcd(a,c);
    }
}
int main(){
    std::cout<<gcd(123456,7890)<<std::endl;
}
