#include <iostream>
#include <string>

using namespace std;

int main()
{
	string key = "      ";
	int len = 6;
	string input;
	string output;
	getline(cin, input);
	
	input.append(6 - input.size() % 6, '_');
	cout << input << endl;
	for(int i = 0; i < input.size(); i+=len)
	{
			 key[1] = input[i];
			 key[4] = input[i+1];
			 key[0] = input[i+2];
			 key[2] = input[i+3];
			 key[3] = input[i+4];
			 key[5] = input[i+5];
			 output += key;
	}
	cout << output;
}

