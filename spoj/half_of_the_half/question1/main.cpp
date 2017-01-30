//
// Created by sunyi on 2017/1/30.
//
#include <iostream>
int main(){
    int n;   //number of string
    std::cout<<"please enter number of string and your strings"<<std::endl;
    std::cin>>n;
    std::cin.ignore(1);
    std::string memory[n];
    for(int i=0;i<n;i++){
        getline(std::cin,memory[i]);
    }
    for(int i=0;i<n;i++){
        int length=memory[i].length();
        for(int j=0;j<=length/2-1;j+=2){
            std::cout<<memory[i][j];
        }
        std::cout<<std::endl;
    }
    return 0;
}
