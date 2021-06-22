//My GitHub Test Project
//Author: Joshua Hughes

#include <iostream>
using namespace std; //used if using "cout <<" instead of "std::cout <<"

//Below are the common variable types used in C++
const int intVar = 5;
float floatVar = 5.0;
double doubVar = 5.0;
char charVar = 'd';
bool boolVar = true;
string stringVar = "Hello World!\n"; //string variable trype only works when "using namespace std: is declared above
string userInput;

int main() {
	cout << stringVar;
	cout << "I am testing cout.\n";
	cin >> userInput; //This will only take a string up to a whitespace, so if a user enters "Hello, my name is" only "Hello," will be stored in userInput
	cout << "User typed: \"" + userInput + "\"" << endl; //Here "<< endl" adds a newline to the end of the print out
	return 0;
}