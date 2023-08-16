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
=  File Basics         =
========================
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
// Write a program that reads a text file and returns the number of lines as well as the total number of characters in the file.
try{
  ifstream file;
  char ch;
  int charcount;
  int linecount;
  string read;
  file.open(path);
  if (!file)
    throw runtime_error("File failed to open.");
  while(getline(file, read)){
    linecount++;
    chars += read.length();
  }
  file.close();

  cout << linecount << " line(s)" << endl;
  cout << charcount << " character(s)" << endl;
}

catch(exception& e){
  cerr << e.what() << endl;
}
  
  //add code above this line
  return 0;
}

========================
/*
Write a program that reads a comma delimited CSV file with four columns and returns the average of each column in the file. 
Assume that the CSV files used will only contain 3 rows and 4 columns.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line

  vector<string> data;
  int col1Avg = 0;
  int col2Avg = 0;
  int col3Avg = 0; 
  int col4Avg = 0; 


  try{
    ifstream file;
    string read;
    file.open(path);
    if(!file){
      throw runtime_error("File failed to open."); 
    }
  
    while(getline(file, read)){
      stringstream ss(read);
      while(getline(ss, read, ',')){
        data.push_back(read);
      }
    }
    file.close();
  
  }
  catch(exception& e){
    cerr << e.what() << endl;
  }

  for(int i=0; i < data.size(); i++){
    if(i%4 == 0){
      col1Avg += stoi(data.at(i));
      col2Avg += stoi(data.at(i+1));
      col3Avg += stoi(data.at(i+2));
      col4Avg += stoi(data.at(i+3));
    }
  }

  cout << col1Avg/3 << " " <<  col2Avg /3<< " " << col3Avg/3 << " " << col4Avg/3 <<  endl;

  //add code above this line
  
  return 0;
  
}

================
/*
Write a program that reads a text file and prints the contents in reverse order.
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
  vector<string> data;
  try{
    ifstream file;
    string read;
    file.open(path);
    if(!file){
      throw runtime_error("File failed to open."); 
    }
  
    while(getline(file, read)){
      stringstream ss(read);
      while(getline(ss, read)){
        data.push_back(read);
      }
    }
    file.close();
  }

  catch(exception& e){
    cerr << e.what() << endl;
  }

for(int i=data.size()-1, i>=0; i--){
    cout << data.at(i) << endl;
}

  //add code above this line
  
  return 0;
  
}

  
