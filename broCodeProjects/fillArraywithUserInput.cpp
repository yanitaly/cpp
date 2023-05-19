#include<iostream>

int main(){
    int size = 5;
    std::string temp;
    std::string foods[size];
    
    for (int i = 0; i < size; i++){
        std::cout << "Enter food you like or 'q' to quit, #" << i + 1 << "\n";
        std::getline(std::cin, temp);
        if (temp != "q"){
            foods[i] = temp;
        } 
        else{
            break;
        }
    } 

    std::cout << "Your food list is:" << "\n";
    for( int i = 0; !foods[i].empty(); i++){  // print only non empty elements(before q)
        std::cout << foods[i] << "\n";
    } 
}