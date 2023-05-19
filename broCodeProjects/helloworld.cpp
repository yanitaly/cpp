
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

// C++ program to display "Hello World"
// compile with: g++ -o helloworld.o helloworld.cpp 
// run with: helloworld.o

//  iosteram: Header file for input output functions

// 
//using namespace std;

typedef std::string text_t; // equivalent with keyword "using"
using text_t = std::string;

namespace firstNamespace{
    int x = 1;
}
namespace secondNamespace{
    int x = 2;
}

double getTotal(double prices[], int size);

// Main() function: where the execution of program begins
int main()
{
    /*
    1#   (00:00:00) C++ tutorial for beginners 👨‍💻
    2#   (00:13:30) Variables and basic data types ✗
    3#   (00:24:14) Const 🚫
    4#   (00:27:37) Namespaces 📛
    5#   (00:32:13) Typedef and type aliases 🙋‍♂
    6#   (00:37:39) Arithmetic operators 🧮
    7#   (00:43:18) Type conversion ✨
    8#   (00:47:05) User input ⌨
    9#   (00:52:35) Useful math related functions🔢
    10# (00:56:03) Hypotenuse calculator practice program 📐
    */

    // prints hello world
    std::cout << "Hello world"<< std::endl;
    std::cout << "How old are you?"<<'\n';

    int age = 18;           //integer: whole number
    double gpa = 2.5;       // number including decimal 
    char grade = 'A';       // char: single character 
    bool forSale = true;    // boolean 
    std::string name = "Bro Code"; // string: objects representing a seq of text
    
    const double PI = 3.14159;
    std::cout << age << gpa << grade << forSale << " Hello " << name << PI <<'\n';

    // namespace: prevents name conflicts in large projs
  
    using namespace secondNamespace;
    std::cout << x << firstNamespace::x << secondNamespace::x <<"\n";

    text_t myfirstName = "Ivan";
    std::cout << myfirstName <<"\n";

    int students = 20;
    students++;
    students = students + 1;
    students+=1; 
    students*=2; 

    int x1 = 3.14;            // type converstion / implicit (automatic)
    double x2 = (int) 3.14;   // type converstion / explicit (precede with new type using ())

    int correct = 8;
    int total = 10;
    double scoreBad = correct / total * 100; 
    double scoreGood = correct / (double) total * 100;
    std::cout << scoreBad <<"%" << " vs " << scoreGood <<"%" <<"\n";
 
    //int age;
    //std::cin >> age; 
    //std::cout << "You are: " << age << " years old.";
    std::cout << "Insert your first name: "<<'\n';
    std::string firstName;
    //std::cin >> firstName;  // no space allowed
    //std::cout << "Hello, "<< firstName<< '\n';

    std::string fullName;
    std::cout << "Insert your full name: "<<'\n';
    //std::getline(std::cin >> std::ws, fullName);  // allow space
    //std::cout << "Hello, "<< fullName << '\n';

    // std::max(x, y);
    // z = pow(2,3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = ceil(x);

    double a, b, c;
    std::cout << "Insert value of a: " <<'\n';
    //std::cin >> a;
    //std::cout << "Insert value of b: " <<'\n';
    //std::cin >> b;
    //c = sqrt(std::pow(a,2) + pow(b,2) );
    //std::cout << "c is: " << c <<'\n';

    /*
	11# (00:58:44) If statements 🤔
	12# (01:03:40) Switches 🔀
	13# (01:09:29) Console calculator program 🖩
	14# (01:14:13) Ternary operator ❓    ?:
	15# (01:18:53) Logical operators 🔣      && || ! 
	16# (01:23:55) Temperature conversion program 🌡
	17# (01:29:17) Useful string methods in C++ 〰
	18# (01:35:51) While loops ♾
	19# (01:38:56) Do while loops 🔃
	20# (01:42:15) For loops 🔂
   	21# (01:45:53) Break & continue 💔
	22# (01:47:34) Nested loops ➿
    */
    // ternary operator  ?: = if/else
    int number = 75;
    number %2 == 0 ? std::cout << "Odd" : std::cout << "Even";
    std::string nameStr = "Bro Code";
    std::cout << "Length of name str is: " << nameStr.length()<<'\n';

    //.clear()
    //.empty()
    //.append()
    //.insert(0, "@") 
    //.at(0) // returns the first char of a str.
    //.find(' ')
    //.erase(0,3)

    std::string nameInsert;
    /*
    while(nameInsert.empty()){
        std::cout << "Enter your name:";
        std::getline(std::cin, nameInsert);
    }
    std::cout << "Hello, " << nameInsert;
    */
    /*
    do{
        std::cout << "Enter your name:";
        std::getline(std::cin, nameInsert);
    }while(nameInsert.empty());
    std::cout << "Hello, " << nameInsert;
    */

    for (int i=0; i<=6; i++){
        if(i==2){
            continue;}
        else if(i==5){
            break;}
        std::cout << i <<'\n';
    }

    /*
	23# (01:51:51) Random number generator 🎲
	24# (01:55:25) Random event generator 🎁
	25# (01:59:05) Number guessing game ↕
	26# (02:03:10) User defined functions 📞
	27# (02:10:33) Return keyword 🔙
	28# (02:16:42) Overloaded functions 🍕
	29# (02:19:49) Variable scope 🌎
	30# (02:24:11) Banking practice program 💰
	31# (02:38:04) ROCK PAPER SCISSORS game 👊
    */
    srand(time(NULL));
    int num = rand() % 3 + 1 ; // random num from 1 to 3
    std::cout << "Random number: " << num <<'\n';
    switch(num){
        case 1: std::cout << "You win 1 million.\n";
                break;
        case 2: std::cout << "You win 100 euro.\n";
                break;
        case 3: std::cout << "You win nothing.\n";
                break;
    } 

    std::cin.clear();
    fflush(stdin); // to flush out invalide choices.

    /*
	32# (02:51:11) Arrays 🚗
	33# (02:56:40) Sizeof() operator ⚖
	34# (03:01:34) Iterate over an array 🗃
	35# (03:05:40) Foreach loop 🗂
	36# (03:08:36) Pass array to a function 💵
	37# (03:13:07) Search an array for an element 🔎
	38# (03:20:43) Sort an array ➡
	39# (03:26:37) Fill() function 🍔
	40# (03:31:19) Fill an array with user input 🌭
   	41# (03:38:17) Multidimensional arrays ⬜
	42# (03:45:57) QUIZ GAME 💯
    */

    std::string cars[] = {"bmw","fiat"};
    // str length = sizeof(arrary of str) / sizeof(str)
    for (int i=0; i < sizeof(cars)/sizeof(std::string); i++){  
        std::cout << cars[i] << '\n'; 
    }
    double prices[2];
    prices[0] = 1.1;
    prices[1] = 2.2;

    // foreach loop: loop that eases the traversal over an iterable data set. 
    for(double price : prices){
        std::cout << price << '\n'; 
    }

    std::string astr = "I am bro";
    // sizeof:  in bytes of: var, data type, class, obj, etc.
    std::cout << "size of a str in byte is: " << sizeof(astr) << '\n'; 
    double adou = 5.1;
    std::cout << "size of a double in byte is: " << sizeof(adou) << '\n'; 

    // pass array to function
    int sizeArray = sizeof(prices)/sizeof(prices[0]);
    double totalPrice = getTotal(prices, sizeArray);
    std::cout << "Total price is: " << totalPrice << '\n'; // 

    // fill(begin, end, value): fills a range of elements with a specified value 
    int sizeFill = 6;
    std::string arrayFill[sizeFill];
    fill(arrayFill, arrayFill + sizeFill/3, "pizza");  // begin addr, end addr, ...
    fill(arrayFill + sizeFill/3, arrayFill + sizeFill/3*2, "pasta");
    fill(arrayFill + sizeFill/3*2, arrayFill + sizeFill, "salad");
    for (std::string food : arrayFill) {
        std::cout << food << " \n";
    }

    // multi-dimentional arrays. 
    std::string cars2D[][2] = {{"a11", "a12"},
                                {"a21", "a22"},
                                {"a31", "a32"}};
    int rowNr = sizeof(cars2D)/sizeof(cars2D[0]);   // nr of rows
    int colNr = sizeof(cars2D[0])/sizeof(cars2D[0][0]);
    for (int i = 0; i < rowNr; i++){
        for (int j = 0; j < colNr; j++){
            std::cout << cars2D[i][j] << "\n";
        }    
    }

    /*
    43# (03:57:42) Memory addresses 🏠
	44# (04:00:31) Pass by VALUE vs pass by REFERENCE 📧
	45# (04:04:47) Const parameters 🧱
	46# (04:07:54) Credit card validator program 💳
	47# (04:17:56) Pointers 👈
	48# (04:23:12) Null pointers ⛔
	49# (04:27:17) TIC TAC TOE game ⭕
	50# (04:46:26) Dynamic memory 🧠
	51# (04:52:15) Recursion 😵
	52# (04:58:35) Function templates 🍪
	53# (05:03:49) Structs 🏗
	54# (05:08:49) Pass structs as arguments 🚚
	55# (05:14:17) Enums 📅
	56# (05:18:38) Object Oriented Programming 🧍
	57# (05:29:32) Constructors 👷
	58# (05:38:26) Constructor overloading 👨‍🍳
	59# (05:42:51) Getters & setters 🔒
	60# (05:48:59) Inheritance 👩‍👧‍👦
    */

    // memory address = locaton in memory where data is stored, "&"
    std::string myStr = "Hi";
    int myInt = 50;
    bool myBool = true;
    std::cout << &myStr << '\n';  // 0xc06e5ff380 > hex to dec > 826485502848 (8-4=4 byte, size of int)
    std::cout << &myInt << '\n';  // 0xc06e5ff37c > hex to dec > 826485502844  (4-3=1 byte, size of bool)
    std::cout << &myBool << '\n'; // 0xc06e5ff37b > hex to dec > 826485502843   
 
    // const parameters = parameters effectively read-only, more secure and conveys intent, 
    // useful for references and pointers. 

    // pointer = variable that stores addr of another var (sometimes easier to work with addr)
    // & addr-off operator
    // * dereference operator  
    std::string name47 = "Bro";
    std::string *pName47 = &name47; // addr 
    std::cout << name47 << "  "<< &name47 << "  "<< pName47 << "  "<< *pName47 <<  '\n'; 
    std::string pizzas[] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pStr = pizzas;  // addr 
    std::cout << *pizzas << "   "<< pizzas << '\n';

    // null pointer == 
    int *pointer = nullptr; 
    int x48 = 123;
    pointer = &x48; 
    if (pointer != nullptr){
        std::cout <<"addr was assigned: " << *pointer <<'\n';
    } 
    else{
        std::cout <<"addr was not assigned"  <<'\n'; // note: dangerous to deref a nullptr or non-assigned

    }

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for (int i = 0; i < size; i++){
        total = total + prices[i];
    }
    return total; 
}