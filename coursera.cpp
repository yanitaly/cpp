#include <iostream>

int main(){
  bool thisIsFun = true;
  std::cout << boolalpha << thisIsFun << endl;  // true
  std::cout << thisIsFun << endl;  // 1

}

========================
vector<string> oceans(0);
oceans.push_back("Pacific"); // add to end
oceans.push_back("Atlantic");
oceans.push_back("Indian");
oceans.push_back("Arctic");
oceans.push_back("Southern");
oceans.push_back("Place Holder");
oceans.at(5) = "Delete"; // replace element nr5
oceans.pop_back(); // remove last element

=======================
// Function to reverse a vector 
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);
  
  //add code below this line
  for(int i=0; i<3; i++){
    reverse.push_back(reverse[2-i]);
  }

  for(int i=0; i<3; i++){
    reverse.erase(reverse.begin());
  }
  //add code above this line
  
  for (auto a : reverse) {
    cout << a << endl;
  }

  return 0;
}

=========================
// function to calculate average of inputs
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
  
  double input;
  double avg = 0;
  vector<double> numList(0);
  
  cout << "Enter double or int to add to total, else find total average:" << endl;
  while (cin >> input) {
    // add input into vector
    numList.push_back(input);
    double total = 0;
    for (auto i : numList){
      total+=i;
      avg = total / numList.size();
    }
    cout << "Total is: " << total << endl;  
    cout << "Enter double or int to add to total, else find total average:" << endl;
  }
  // iterate through vector, add elements to total, then calculate average
  // your code goes above
  cout << avg << endl;
  return 0;
}

========================
