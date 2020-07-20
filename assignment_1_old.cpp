#include <stdio.h>
#include <bits/stdc++.h> 
#include <unordered_map> 


using namespace std;

// CMD Command Table

enum Command {say, add, bye};
unordered_map<string,Command> cmd_table; 

// definition of strings to commmands

void Word_Parse(string line_to_check) 
{
	string buffer = line_to_check;
	istringstream ss(buffer);
	
	string word;
    ss >> word;
    
    // cout << buffer;
    
	if (word == "/say") 
	{
		//printf("bingo\n"); 
		//endl;
		// string rem_sentence;
		//cout << buffer;
		
		string rem_sentence = line_to_check.substr(line_to_check.find(" ")+1, line_to_check.length());
		
		cout << "Say: '" << rem_sentence << "'"<< endl;
	}
	else printf("Wrong input, lad.");
}

void Compare_Commands(Command cmd_to_check)
{
	switch (cmd_to_check)
	{
		case say:
		{
			//cout << 
			break;
		}
	}
	
}


int main () 
{
	cmd_table["/say"] = say;
	cmd_table["/add"] = add;
	cmd_table["/bye"] = bye;

	string u_input;
	cout << "What's up?" <<endl;
	//cin >> u_input;
	getline(cin, u_input);
	//cout << u_input;
	Word_Parse(u_input);
	
	return 0; 
}
