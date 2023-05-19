#include<iostream>

int main(){
    // questions
    std::string questions[] = { "Who invented C++?", 
                                "Which is precessor for C++?",
                                "Is Earth flat?"};
    // options
    std::string options[][4] = {{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. Mark Zuckburg", "D. Dennis Ritchie"},
                                {"A. C", "B. C#", "C. B", "D. B+"},
                                {"A. Yes", "B. No", "C. Sometimes", "D. What is Earth"}};

    const char correct[] = {'B', 'A', 'A'};
    char answer; 
    int score = 0; 

    // print game
    int nrQ = sizeof(questions)/sizeof(questions[0]);
    for (int i = 0; i < nrQ; i++){
        std::cout << "Question #" << i+1 << ": ";
        std::cout << questions[i] << "\n";
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][j]); j++){
            std::cout << options[i][j]<< "\n";
        }

        // get and verify user answer
        std::cin >> answer;
        if (toupper(answer) == correct[i]){
            score++;}
        else{
            std::cout << "Correct answer is:" << correct[i]<< "\n";}
    }
    // show score
    std::cout << "********** RESULTS ***********"<<'\n'; 
    std::cout << "Final score is: " << score/(double)nrQ*100<<"%"<<'\n'; 

    return 0;
}