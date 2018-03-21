#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstring>

#define VAR_MAX 255


//Runs the core processes of the shell: reading, interpreting, and executing
void shell()
{
	std::cout << "msh > ";		//Displays prompt
	char command[VAR_MAX];		//Creates string for the entered command and reads it
	std::cin.getline(command, VAR_MAX);
	std::vector<char*> tokens;	//Creates vector for the tokens
	char* tok_val;			//Creates a value for getting tokens
	tok_val = strtok(command, " ");	//Gets the first token
	while(tok_val != NULL)		//Iterates through the entered command line and gets every token separated by spaces
	{
		tokens.push_back(tok_val);	//Adds the valid token to the token vector
		tok_val = strtok(NULL, " ");	//Gets the next token
	}
	
	//the tokens have been assembled, now they may be utilized
}

int main()
{
	while(1)
	{
		shell();		//Runs loop that serves as the shell
	}
	return 0;
}
