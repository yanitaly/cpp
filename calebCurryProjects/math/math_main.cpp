#include <iostream>
#include "math_utils.h"

int main(){

    Rectangle rectangle;
    rectangle.width = 5;
    rectangle.length = 10;
    std::cout << "Area is: "<< area(rectangle.length, rectangle.width);
    
    return 0;
}
