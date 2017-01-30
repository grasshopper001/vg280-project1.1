#include <iostream>
#include <cmath>
#include"checkProperty.h"
using namespace std;


checkProperty::checkProperty(): integer(0){
    IntegerSetFlag=false;
}
checkProperty::checkProperty(int integer):integer(integer) {
    IntegerSetFlag=true;
}

bool checkProperty::isTriangleNumber() {
    cout<<"*****"<<endl;
    if(IntegerSetFlag){
        double upper=sqrt(integer*2);
        for(int i=0;i<upper;i++){
            if(integer==i*(i+1)/2){cout<<"the integer "<<integer<<" is a triangle number"<<endl;return true;}
        }
        cout<<"the integer "<<integer<<" is a triangle number"<<endl;
        return false;
    }
    cout<<"not valid usage"<<endl;
    return false;
}

bool checkProperty::isTriangleNumber(int integer) {
    if(!IntegerSetFlag){this->integer=integer; IntegerSetFlag=true;}
    checkProperty temp(integer);
    return temp.isTriangleNumber();
}

bool checkProperty::isPalindrome() {
    cout<<"*****"<<endl;
    if(IntegerSetFlag){
        int digit=(int)(floor(log10(integer)));
        for(int i=0;i<digit/2;i++){
            if(floor(integer/pow(10,digit))-floor(integer/pow(10,digit))!=floor(integer/pow(10,i)-floor(integer/pow(10,i+1)*10))){
                cout<<"the integer "<<integer<<" is not a Pallindrome"<<endl;
                return false;
            }
        }
        cout<<"the integer "<<integer<<" is a Pallindrome"<<endl;
        return true;
    }
    cout<<"not valid usage"<<endl;
    return false;
}

bool checkProperty::isPalindrome(int integer) {
    if(!IntegerSetFlag){this->integer=integer;IntegerSetFlag=true;}
    checkProperty temp(integer);
    return temp.isPalindrome();
}

bool checkProperty::isPowerNumber(){
    cout<<"*****"<<endl;
    if(IntegerSetFlag){
        if(integer==1){cout<<"the integer 1 is a power number"<<endl;return true;}
        int upper=(int)floor(sqrt(integer));
        for(int i=2;i<upper;i++){
            int temp=pow(i,2);
            while(temp<=integer){
                if(temp==integer){cout<<"the integer "<<integer<<" is a power number"<<endl;return true;}
                temp*=i;
            }
        }
        cout<<"the integer "<<integer<<" is not a power number"<<endl;return false;
    }
    cout<<"not valid usage"<<endl;return false;
}

bool checkProperty::isPowerNumber(int integer) {
    if(!IntegerSetFlag){this->integer=integer;IntegerSetFlag=true;}
    checkProperty temp(integer);
    return temp.isPowerNumber();
}

bool checkProperty::isAbundantNumber(){
    cout<<"*****"<<endl;
    if(IntegerSetFlag) {
        int divisorSum = 0;
        for (int i = 1; i < integer; i++) {
            if (integer / i == floor(integer / i)) { divisorSum += i; }
        }
        if (divisorSum > integer) {
            cout << "the integer " << integer << " is an abundant number" << endl;
            return true;
        }
        cout << "the integer " << integer << " is not an abundant number" << endl;
        return false;
    }
    cout<<"not valid usage"<<endl;
}

bool checkProperty::isAbundantNumber(int integer) {
    if(!IntegerSetFlag){this->integer=integer;IntegerSetFlag=true;}
    checkProperty temp(integer);
    return temp.isAbundantNumber();
}
