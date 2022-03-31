// ddos_cross_platform.cpp : Defines the entry point for the application.
//

#include "ddos_cross_platform.h"
#include "functions.h"
#include "functions_test.h"

using namespace std;

int main()
{
	Functions functions;
	cout << functions.custom_multiply(2, 3) << endl;
	cout << custom_sum(2, 3) << endl;
	string input_message;
	cin >> input_message;
	cout << input_message << endl;
	cin >> input_message;
	return 0;
}
