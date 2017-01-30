//
// Created by sunyi on 2017/1/30.
//
#include <iostream>
#include <cmath>
class magic_square{
private:
    int**digit;
    int n;
    bool init(int currentNumber,int row,int col){
        if(currentNumber>pow(n,2)){
            return true;
        }
        if(row>=0&&col>=0&&row<n&&col<n){
            if(digit[row][col]==0){digit[row][col]=currentNumber;return init(currentNumber+1,row-1,col+1);}
            else{return init(currentNumber,row+1,col);}
        }
        if(row<0){return init(currentNumber,n-1,col);}
        if(col>=n){return init(currentNumber,row,0);}
    }
public:
    magic_square(int n):n(n){
        digit=new int*[n];
        for(int i=0;i<n;i++){
            digit[i]=(int*)calloc(n,sizeof(int));
        }
        init(1,0,n/2);
    }
    void print(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                std::cout<<digit[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
    ~magic_square(){
        for(int i=0;i<n;i++){
            delete digit[i];
        }
        delete digit;
    }
};

int main(){
    magic_square square(3);
    square.print();
    return 0;
}
