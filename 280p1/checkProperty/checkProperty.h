//
// Created by sunyi on 2017/1/27.
//

#ifndef PROJECT1_1_CHECKPROPERTY_H
#define PROJECT1_1_CHECKPROPERTY_H
class checkProperty{
private:
    int integer;
    bool IntegerSetFlag;
public:
    checkProperty();
    checkProperty(int integer);
    bool isTriangleNumber();
    bool isTriangleNumber(int integer);
    bool isPalindrome();
    bool isPalindrome(int integer);
    bool isPowerNumber();
    bool isPowerNumber(int integer);
    bool isAbundantNumber();
    bool isAbundantNumber(int integer);
};
#endif //PROJECT1_1_CHECKPROPERTY_H
