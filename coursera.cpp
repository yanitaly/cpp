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
    int charcount =0;
    int linecount =0;
    string read;
    file.open(path);
    if (!file)
      throw runtime_error("File failed to open.");
    while(getline(file, read)){
      linecount++;
      charcount += read.length();
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
Problem:
Write a program that reads a comma delimited CSV file with four columns and returns the average of each column in the file. Assume that the CSV files used will only contain 3 rows and 4 columns.
Expected Output:
The CSV file looks like the one below.
1,5,10,30
19,15,10,15
10,4,-2,15
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

for(int i=data.size()-1; i>=0; i--){
    cout << data.at(i) << endl;
}

  //add code above this line
  
  return 0;
  
}

====================
/*
Write a program that reads a tab ('\t') delimited CSV file and prints the name of the oldest person in the file. 
Assume that there are no two people with the same age.
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
        while(getline(ss, read, '\t')){
          data.push_back(read);
        }
      }
      file.close();
  }

  catch(exception& e){
    cerr << e.what() << endl;
  }
  
  int maxAge = 0;
  string oldestName; 
  for (int i = 1; i<=data.size(); i+=3){
    if (stoi(data.at(i)) > maxAge ){
      maxAge = stoi(data.at(i));
      oldestName = data.at(i-1);
    }
  }

  cout << "The oldest person is " << oldestName << ".";

  //add code above this line
  
  return 0;
  
}

===================
/*
Problem
Write a program that reads a comma delimited CSV file and prints all of the cities which reside in the Southern Hemisphere. Note, any latitude with a negative value is south of the equator.

Expected Output
The CSV file looks like the one below.
City,Country,Latitude,Longitude
Beijing,China,39,116
Perth,Australia,-57,115
Port Moresby,Papua New Guinea,-25,147
Tokyo,Japan,35,139
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
        while(getline(ss, read, ',')){
          data.push_back(read);
        }
      }
      file.close();
  }

  catch(exception& e){
    cerr << e.what() << endl;
  }
  
  string cities;
  for (int i = 6; i<=data.size(); i+=4){
      if (stoi(data.at(i)) < 0 )
        cities += data.at(i-2) + ", "; 
  }

  cout << "The following cities are in the Southern Hemisphere: ";
  cities.pop_back(); // rm last space
  cities.pop_back(); // rm ","
  cities +=".";
  cout << cities;
  //add code above this line
  
  return 0;


========================
=  Recursive           =
========================
  int RecursiveSum(int n){
  if (n==1){
    return 1;
  }
  else {
    return n + RecursiveSum(n-1);
  }
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << RecursiveSum(stoi(argv[1])) << endl;
  return 0;
}



int ListSum(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
    return nums.at(0) + ListSum(new_vector);
  }
}



int BunnyEars(int n){
  if(n == 0)
    return 0;
  else{
    return BunnyEars(n-1) + 2; 
  }




string ReverseString(string s) {
  if (s.length() == 1) {
    return s;
  }
  else {
    return s.substr(s.length() - 1) + ReverseString(s.substr(0, s.length() - 1));
  }
}



int GetMax(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
    return max(nums.at(0), GetMax(new_vector));
  }
}

========================
=  Function            =
========================
/*
If the string parameter is "true", print only the even integers separated by a newline. If the string parameter is "false", print only the odd integers separated by a newline. Else, no output will be printed and you will see the default message of Command was successfully executed..
*/
#include <iostream>
#include <vector>
using namespace std;

//add code below this line

void GetOddsEvens(string x, vector<int> y){
  if(x == "true"){
    for (auto a : y){
      if (a % 2 == 0){
        cout << a << endl;
      }
    }
  } 
  else if (x == "false"){
    for (auto a : y){
      if (a % 2 == 1){
        cout << a << endl;
      }
    } 
  }
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}


// Write a function called FindTerm() that takes a string term and a string vector as parameters. 
bool FindTerm(string x, vector<string>& y) {
  bool b = false;
  for (auto a : y) {
    if (a == x) {
      b = true;
    }
  }
  return b;
}


// check word is Palindrome 
bool IsPalindrome(string x) {
  bool palindrome = false;
  string y;
  for (int i = x.length() - 1; i >= 0; i--) {
    y += x.at(i);
  }
  if (x == y) {
    palindrome = true;
  }
  return palindrome;
} 


// check word is Palindrome using helper function 
bool IsPalindrome(string x) {
  bool palindrome = false;
  if (x == (Reverse(x))) {
    palindrome = true;
  }
  return palindrome;
}
  
  
}


