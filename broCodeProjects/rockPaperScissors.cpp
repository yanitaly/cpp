#include <iostream>
#include <ctime>

// Rock Paper Scissor game.
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer; 

    player = getUserChoice();
    std::cout << "Your choice is: \n";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice is: \n";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

// Rock Paper Scissor game.
char getUserChoice(){
    char user;
    std::cout << "Rock-Papar-Scissors Game!" << '\n';

    do{ 
        std::cout << "Choose one of the following:" << '\n';
        std::cout << "***********************" << '\n';
        std::cout << "'s' for scissors\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cin >> user;
    } while(user != 'p' && user != 'r' && user != 's');

    return user;
}

char getComputerChoice(){
    srand(time(NULL));
    int ranNum = rand() % 3 + 1;
    switch(ranNum){
        case 1: 
            return 'r';
            break;
        case 2:
            return 'p';
            break;
        case 3:
            return 's';
            break;
    }
    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 's': std::cout << " scissors.\n";
            break;
        case 'r':
            std::cout << " rock.\n";
            break;
        case 'p':
            std::cout << " paper.\n";
            break;
    }
}

void chooseWinner(char player, char computer){
    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << " it is a tie.\n";
                    }
                    else if(computer == 'p'){
                        std::cout << " You lose.\n";
                    }
                    else{
                        std::cout << " You win.\n";
                    }
                    break;
        case 'p':   if(computer == 'p'){
                        std::cout << " it is a tie.\n";
                    }
                    else if(computer == 's'){
                        std::cout << " You lose.\n";
                    }
                    else{
                        std::cout << " You win.\n";
                    }
                    break;
        case 's':   switch(computer){
                        case 's':   std::cout << " it is a tie.\n";
                                    break;
                        case 'p':   std::cout << " You win.\n";
                                    break;
                        case 'r':   std::cout << " You lose.\n";
                                    break;
                    }  
    }
}