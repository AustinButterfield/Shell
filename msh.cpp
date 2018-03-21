#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>

#define VAR_MAX 255


//Runs the core processes of the shell: reading, interpreting, and executing
void shell()
{
 	//Displays prompt
	std::cout << "msh > ";
	//Creates string for the entered command and reads it
	char command[VAR_MAX];
	std::cin.getline(command, VAR_MAX);
 	//Creates vector for the tokens
	std::vector<char*> tokens;
	//Creates a value for getting tokens
	char* tok_val;
	//Gets the first token
	tok_val = strtok(command, " ");
	//Iterates through the entered command line and gets every token separated by spaces
	while(tok_val != NULL)
	{
		//Adds the valid token to the token vector
		tokens.push_back(tok_val);
		//Gets the next token
		tok_val = strtok(NULL, " ");
	}
	
	//the tokens have been assemlbed, now they may be utilized
}

int main()
{
	while(1)
	{
		//Runs loop that serves as the shell
		shell();
	}
	return 0;
}
