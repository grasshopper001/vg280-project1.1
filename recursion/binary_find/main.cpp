//
// Created by sunyi on 2017/1/28.
//

#include <iostream>
#include <cmath>
const static int array[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
enum bound{upperbound,lowerbound,target};

int binary_bound(int* bound){
    int mid=(int)floor((bound[upperbound]+bound[lowerbound])/2);
    if(array[mid]==bound[target]){
        return mid;
    }
    if(bound[upperbound]<=bound[lowerbound]){
        return -1;
    }
    if(array[mid]>bound[target]){
        bound[upperbound]=mid-1;
        return binary_bound(bound);
    }
    if(array[mid]<bound[target]){
        bound[lowerbound]=mid+1;
        return binary_bound(bound);
    }
    return -1;
}

int main(){
    int bound[3]={0,14,7};
    std::cout<<binary_bound(bound)<<std::endl;
    return 0;
}
