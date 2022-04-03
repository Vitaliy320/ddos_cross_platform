// ddos_cross_platform.cpp : Defines the entry point for the application.
//

#include "ddos_cross_platform.h"
#include "functions.h"
#include "functions_test.h"

using namespace std;

string removeSpaces(string input_message) {
	input_message.erase(remove(input_message.begin(), input_message.end(), ' '), input_message.end());
	return input_message;
}

int main()
{
	system("mkdir test");
	return 0;
}
