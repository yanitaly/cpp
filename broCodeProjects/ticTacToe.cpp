#include<iostream>
#include<ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(); 

int main(){
    bool running = true; 
    char player ='O';
    char computer = 'X';
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    drawBoard(spaces);
    while(running){
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
    }
}

void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] <<  " "<< '\n';
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] <<  " "<< '\n';
    std::cout << "_____|_____|_____" << "\n";
        std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] <<  " "<< '\n';
    std::cout << "     |     |     " << "\n";
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int choice;  
    do{
        std::cout << "Enter a spot to place a marker(1 to 9): ";
        std::cin >> choice; 
        choice--; 
        if(spaces[choice] == ' '){
            spaces[choice] = player;
            break;
        }
    } while( choice < 0 || choice > 8);
}

void computerMove(char *spaces, char computer){
    srand(time(0));
    int numRand;
    while(true){
        numRand = rand() % 9; 
        if(spaces[numRand] == ' '){
            spaces[numRand] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && spaces[0] != ' '){
        spaces[0] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && spaces[3] != ' '){
        spaces[3] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[7] == spaces[8] && spaces[8] == spaces[9] && spaces[7] != ' '){
        spaces[7] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[0] == spaces[4] && spaces[4] == spaces[7] && spaces[0] != ' '){
        spaces[0] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[1] == spaces[5] && spaces[5] == spaces[8] && spaces[1] != ' '){
        spaces[1] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[3] == spaces[6] && spaces[6] == spaces[9] && spaces[3] != ' '){
        spaces[3] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[0] == spaces[5] && spaces[5] == spaces[9] && spaces[0] != ' '){
        spaces[0] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else if (spaces[3] == spaces[5] && spaces[5] == spaces[7] && spaces[3] != ' '){
        spaces[3] == computer ? std::cout << "You lose!" : std::cout << "You win!";
    }
    else{
        return false;
    }
    return true;
}

bool checkTie(); 