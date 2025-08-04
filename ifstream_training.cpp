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

string user_input;

cout << "Enter your name: " << endl;

getline(cin, user_input);

//create and writing a file

ofstream a_text_file("text.txt");

a_text_file << user_input;
a_text_file.close();

return 0;

}

