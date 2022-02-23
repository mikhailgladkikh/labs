#include <iostream>
#include <string>

using namespace std;

int main()
{
	int len = 6;
	string input;
	string output;
	cout << "Enter your string: ";
	getline(cin, input);
	
	int additional_spaces_count = 6 - input.size() % 6;
	if (additional_spaces_count != 6)
	{
		input.append(6 - input.size() % 6, '_');
	}

	for(int i = 0; i < input.size(); i+=len)
	{
		
		output.push_back(input[i + 2]);
		output.push_back(input[i]);
		output.push_back(input[i + 3]);
		output.push_back(input[i + 4]);
		output.push_back(input[i + 1]);
		output.push_back(input[i + 5]);
	}
	cout << "Crypted string: " << output;
}

