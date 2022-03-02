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
	//ñount how many symbols needs to be added to the end of the string to make it multiple of six
	int additional_spaces_count = 6 - input.size() % 6;
	if (additional_spaces_count != 6)
	{
		input.append(additional_spaces_count, '_');
	}
	//cypher
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

