#include <iostream>
using namespace std;

int main() {

	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	switch( grade )  // This is where the switch statement begins
  {
  	case 'A':  cout << "an A - excellent work !" << endl;
  		       
  	case 'B':  cout << "you got a B - good job" << endl;
  		       
  	case 'C':  cout << "earning a C is satisfactory" << endl;
  		       
  	case 'D':  cout << "while  D is passing, there is a problem" << endl;
  	   	       
    case 'F':  cout << "you failed - better luck next time" << endl;
  		       
    default:   cout << "You did not enter an A, B, C, D, or F" << endl;
	}

// The break statement causes the code to avoid the case statements that come after the case staement it applies to. So basically the break; makes it to where if the user enters the proper command the user will get the proper output but if you don't use break; then the user will get the proper out and the output statements after that as well. So its very important.

}