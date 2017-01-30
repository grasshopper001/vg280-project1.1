#include <iostream>
#include "checkProperty.h"

int main() {
    checkProperty test;
    test.isAbundantNumber();   //not valid usage
    test.isAbundantNumber(12);   //integer==12
    test.isPowerNumber();    //integer==12
    test=checkProperty(252);
    test.isPalindrome();    //integer==252
    test.isTriangleNumber(3);   //integer==3
    return 0;
}