// ddos_cross_platform.cpp : Defines the entry point for the application.
//

#include "ddos_cross_platform.h"
#include "functions.h"
#include "functions_test.h"
#include <filesystem>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
namespace fs = std::filesystem;

//string removeSpaces(string input_message) {
//	input_message.erase(remove(input_message.begin(), input_message.end(), ' '), input_message.end());
//	return input_message;
//}

string readFromFile(string path) {
	fs::path currentDirectory = fs::current_path();
	string currentLine;

	string toFile = currentDirectory.string() + "\\ddos_cross_platform\\build\\" + path;
	ifstream inputFile;
	inputFile.open(toFile);
	while (getline(inputFile, currentLine)) {
		// Output the text from the file
		cout << currentLine << endl;
	}
	return "0";
}

bool endsWith(string stringToCheck, string subString) {
	if (stringToCheck.length() >= subString.length()) {
		return (0 == stringToCheck.compare(stringToCheck.length() - subString.length(), subString.length(), subString));
	}
	else {
		return false;
	}
}

void navigate_to_targets() {
	fs::path currentDirectory = fs::current_path();
	string fileName = "targets.txt";
	ifstream file;
	file.open(fileName);
	bool folderFound = false;

	while (folderFound == false) {
		if (file.good()) {
			readFromFile(currentDirectory.string() + "targets.txt");
			folderFound = true;
		}

		int a = chdir("..");
		currentDirectory = fs::current_path();

		if (endsWith(currentDirectory.string(), "ddos_cross_platform") == true) {
			folderFound = true;
			readFromFile(fileName);
		}
	};
}

int main()
{
	navigate_to_targets();
	string _solutiondir = R"($(SolutionDir))";
	const char* path = "./ddos_cross_platform/ddos_cross_platform";


	//std::experimental::filesystem::path cwd = std::experimental::filesystem::current_path()

	//while (getline(inputFile, currentLine)) {
	//	// Output the text from the file
	//	cout << currentLine;
	//}
	//system("mkdir test");
	//cout << "Current path is " << std::filesystem::current_path() << '\n';
	//cout << "Current path is " << std::filesystem::current_path() << '\n';
	/*string user_input;
	cin >> user_input;
	system("ls");
	system("mkdir test");
	system("ls");*/
	return 0;
}