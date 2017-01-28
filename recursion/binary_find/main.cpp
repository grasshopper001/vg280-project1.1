//
// Created by sunyi on 2017/1/28.
//

#include <iostream>
#include <cmath>
const static int array[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

int binary_bound(int upperbound,int lowerbound,int target){
    int mid=(upperbound+lowerbound)/2;
    if(array[mid]==target){
        return mid;
    }
    if(upperbound<=lowerbound){
        return -1;
    }
    if(array[mid]>target){
        return binary_bound(mid-1,lowerbound,target);
    }
    if(array[mid]<target){
        return binary_bound(mid+1,lowerbound,target);
    }
    return -1;
}

int main(){
    std::cout<<binary_bound(0,14,7)<<std::endl;
    return 0;
}
