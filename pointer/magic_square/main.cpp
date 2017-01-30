//
// Created by sunyi on 2017/1/30.
//
#include <iostream>
#include <cmath>
#include <iomanip>
#define swap(a,b) a=a^b;b=a^b;a=a^b;

class magic_square{
private:
    int**digit;
    int n;
    bool init_odd(int currentNumber,int row,int col){
        if(currentNumber>pow(n,2)){
            return true;
        }
        if(row>=0&&col>=0&&row<n&&col<n){
            if(digit[row][col]==0){digit[row][col]=currentNumber;return init_odd(currentNumber+1,row-1,col+1);}
        }
        if(row<0&&col<n){return init_odd(currentNumber,n-1,col);}
        if(col>=n&&row>=0){return init_odd(currentNumber,row,0);}
        return init_odd(currentNumber,row+2,col-1);
    }
    void init_mod2(){
        magic_square sample(n/2);
        for(int i=0;i<n/2;i++){
            for(int j=0;j<n/2;j++){
                this->digit[i][j]=sample.digit[i][j];
                this->digit[i+n/2][j+n/2]=sample.digit[i][j]+n*n/4;
                this->digit[i][j+n/2]=sample.digit[i][j]+n*n/2;
                this->digit[i+n/2][j]=sample.digit[i][j]+n*n/4*3;
            }
        }
        int k=(n-2)/4;
        for(int i=0;i<n/2;i++){
            if(i==n/4){
                for(int j=0;j<k;j++){
                    swap(this->digit[i][j+n/4],this->digit[i+n/2][j+n/4]);
                }
            }
            else{
                for(int j=0;j<k;j++){
                    swap(this->digit[i][j],this->digit[i+n/2][j]);
                }
            }
            for(int j=0;j<k-1;j++){
                swap(this->digit[i][n-1-n/4-j],this->digit[i+n/2][n-1-n/4-j]);
            }
        }
    }
public:
    magic_square(int n):n(n){
        digit=new int*[n];
        for(int i=0;i<n;i++){
            digit[i]=(int*)calloc(n,sizeof(int));
        }
        if(n!=n/2*2) {init_odd(1,0,n/2);}
        else if(n!=n/4*4){init_mod2();}
    }
    void print(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                std::cout<<std::setw(4)<<digit[i][j]<<" ";
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
    magic_square square(10);
    square.print();
    return 0;
}
