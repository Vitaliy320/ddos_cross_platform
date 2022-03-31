// ddos_cross_platform.cpp : Defines the entry point for the application.
//

#include "ddos_cross_platform.h"
#include "functions.h"
#include "functions_test.h"

using namespace std;

string removeSpaces(string str) {
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

int main()
{
	Functions functions;
	/*cout << functions.custom_multiply(2, 3) << endl;
	cout << custom_sum(2, 3) << endl;*/
	string input_message;
	cout << "Hello there!" << endl;
	getline(cin, input_message);
	input_message = removeSpaces(input_message);
	
	if (input_message == "GeneralKenobi" || input_message == "GeneralKenobi!") {
		cout << "You are a bold one" << endl;
		getline(cin, input_message);
	}
	
	return 0;
}
