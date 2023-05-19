#include<iostream>

void swapValue(std::string X, std::string Y);
void swapRef(std::string &X, std::string &Y);

int main(){
    std::string X = "XXX";
    std::string Y = "YYY";
    swapValue(X, Y);
    std::cout << X << ' ' << Y << '\n';
    std::cout << &X << ' ' << &Y << '\n'; // when passing by value, copy to new addresses

    swapRef(X, Y);
    std::cout << X << ' ' << Y << '\n';
    std::cout << &X << ' ' << &Y << '\n';  // when passing by ref, operates on orig addr >> always use ref by default.

    return 0;
}

void swapValue(std::string X, std::string Y){
    std::string temp;
    std::cout << &X << ' ' << &Y << '\n';
    temp = X;
    X = Y;
    Y = temp; 
}

void swapRef(std::string &X, std::string &Y){
    std::string temp;
    std::cout << &X << ' ' << &Y << '\n';
    temp = X;
    X = Y;
    Y = temp; 
}