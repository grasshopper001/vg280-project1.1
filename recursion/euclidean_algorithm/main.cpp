//
// Created by sunyi on 2017/1/29.
//
#include <iostream>
unsigned long int euclidean_algorithm(unsigned long int a,unsigned long int b){
    if(a<b){
        unsigned long int temp=a;
        a=b;
        b=a;
    }
    if(a==(a/b)*b){return b;}
    else{
        unsigned long int c=a-(a/b)*b;
        return euclidean_algorithm(a,c);
    }
}
int main(){
    std::cout<<euclidean_algorithm(123456,7890)<<std::endl;
}
