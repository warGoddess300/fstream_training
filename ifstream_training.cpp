/*training to write
*open
*close
*a file because i asked an AI howTO 
*because i learn to code an AI chatBot in C++
*programming C++ is a game like
*call of duty: warzone mobile
*/

//this header file is for input and output functions
#include <iostream>

//adding this header file to write, read files
#include <fstream>

//adding this header file to use a string data type
#include <string>

//i don't want to write std:: everytime

using namespace std;

int main() {

//declaring a variable and its data type

string user_input;

//outputting a message to the user

cout << "Enter your name: " << endl;

//storing input from the user to the variable user_input

getline(cin, user_input);

//create and writing a file

ofstream a_text_file("text.txt");

//writing in the text file what is stored in the variable string user_input

a_text_file << user_input;
  
//closing the file
  
a_text_file.close();

return 0;

}

