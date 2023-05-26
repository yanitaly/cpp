#include<iostream>

/*	
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

// template = used to generate as many as overloaded functions as needed, 
//            each using different data types. 
template <typename T, typename U>

auto max(T x52, U y52){
    return (x52 > y52) ? x52 : y52;
}

struct Student{
    std::string name;  // access prestriction:  default for struct is PUBLIC
    double gpa;
    bool enrolled;
}; 

void printStruct(Student student);

enum Day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
enum Color {green, red, blue};

class Animal{
    public: // access prestriction:  default for class is PRIVATE
        int legs = 4;
        std::string sound = "woooooof"; 

        void makeSound(){
            std::cout << "Animal sound is: " << sound;
        }
};

class Dog : public Animal{
}; 

class Car{
    public:
        int wheels;
        std::string name; 
        int year;
    
    // constructor
    Car(int wheels, std::string name){
        this->wheels = wheels;
        this->name = name; 
    }

    // constructor overloading 
    Car(int wheels, std::string name, int year){
        this->wheels = wheels;
        this->name = name;
        this->year = year;
    }
};

class Stove{
    private:
        int temperature = 0; 
    public:
    Stove(int temprature){
        setTemperature(temperature);
    }

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = -10;
        }
        else{
            this->temperature = 10; 
        }
    }
};

int main(){


    std::cout << "max is: "<< max(5, 2.1) <<'\n'; 
    std::cout << "max is: "<< max('a', 'c') <<'\n'; 

    // struct = group related variables(can be different data types)
    //          "memebers" can be accessed by "."

    Student student1;
    student1.name = "Spongibob";
    student1.gpa = 3.1;
    student1.enrolled = true;
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    // pass struct as arguments. 
    printStruct(student1);

    // Enums = user-defined data type, consists paried name-integer constants
    //         GREAT if you have a set of potential options. 
    Day today = friday; 
    switch(today){
        case sunday: std::cout << "It is sunday.\n";
                    break;
        case monday: std::cout << "It is monday.\n";
                    break;
        case tuesday: std::cout << "It is tuesday.\n";
                    break;
        case wednesday: std::cout << "It is wednesday.\n";
                    break;
        case thursday: std::cout << "It is thursday.\n";
                    break;
        case friday: std::cout << "It is friday.\n";
                    break;
        case saturday: std::cout << "It is saturday.\n";
                    break;
    }


    Animal chick; 
    chick.legs = 2;
    chick.sound = "Cheeeeep";
    std::cout << "Chick has nr of legs: "<< chick.legs << '\n'; 
    chick.makeSound();

    // objects, constructor = special method that is automatically call when instatiated. 
    //              useful to assign value to attributes as args. 
    Car mycar(8, "BMW");
    std::cout << "\nMy car is: " << mycar.name << " Num of wheels: " << mycar.wheels;  
    // overloading 
    Car yourCar(8, "BMW", 2020);
    std::cout << "\nUr car: " << yourCar.name << " Num wheels: " << yourCar.wheels << " from: "<<yourCar.year<<'\n';  
    
    // abstraction = hiding unnecessary data from outside a class
    //              getter = function make a private attribute READABLE
    //              setter = function make a private attribute WRITEABLE
    Stove stove(5);
    //stove.setTemperature(5);
    std::cout << "Temperature set to: " << stove.getTemperature() << '\n';

    // inheritance 
    Dog dog; 
    std::cout << "Dog has nr of legs: "<< dog.legs << '\n'; 
    dog.makeSound();

    return 0;
}

void printStruct(Student student){
    std::cout << student.name << '\n';
    std::cout << student.gpa << '\n';
    std::cout << student.enrolled << '\n';
}