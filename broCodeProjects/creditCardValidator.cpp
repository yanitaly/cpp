#include<iostream>

int sumEven(std::string cardNum);
int sumOdd(std::string cardNum);
int getDigit(int tempNum);

int main(){
    int sum = 0; 
    std::string cardNum = "6011000990139424";
    sum = sumOdd(cardNum) + sumEven(cardNum);
    if (sum % 10 == 0){
        std::cout << cardNum <<" is valid!";
    }
    else{
        std::cout << cardNum <<" is not valid!";
    }

    return 0;
}

int sumEven(const std::string cardNum){
    int sum = 0; 
    for (int i = cardNum.length()-2; i >= 0; i-=2){
        //std::cout << i << " "<< cardNum[i]  << " "<< (cardNum[i] - '0')*2 << " "<< getDigit((cardNum[i] - '0')*2) << '\n';
        sum += getDigit((cardNum[i] - '0')*2);
    }
    std::cout << "Sum of even digits: " << sum  << '\n';

    return sum;
}
int sumOdd(const std::string cardNum){
    int sum = 0; 
    for (int i = cardNum.length()-1; i >= 0; i-=2){
        sum += cardNum[i] - '0';
    }
    std::cout << "Sum of odd digits: " << sum  << '\n';

    return sum;
}

int getDigit(const int tempNum){
    return tempNum % 10 + (tempNum / 10) % 10; 
}