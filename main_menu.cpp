#include "main_menu.h"

void MainMenu::ShowMainTitle()
{
	// This line will writeout the name of the application.
	std::cout << 
		"#######  ####### ######## ######## #######  ######   ######## ######## ##       ########\n"
		"###   ## ##      ##       ##    ## ##    ## ##   ##  ##       ##    ## ##       ##\n"
		"###   ## ##      ##       ##    ## ##    ## ##    ## ##       ##    ## ##       ##\n"
		"######## ####    ##       ##    ## ######## ##    ## ######## ##    ## ##       ####\n"
		"## ##    ##      ##       ##    ## ## ##    ##    ##       ## ##    ## ##       ##\n"
		"##  ##   ##      ##       ##    ## ##  ##   ##   ##        ## ##    ## ##       ##\n"
		"##   ##  ####### ######## ######## ##   ##  ######   ######## ######## ######## ########\n" << std::endl;
	// And this one will writeout the credentials.
	std::cout << 
		"Application made by FairerExpert8.\n"
		"Created in Visual Studio 2026 Community Edition, with C++.\n"
		"Published on GitHub.\n" << std::endl;
}

void MainMenu::ShowMenuOptions(std::string Input)
{
	// New .txt file entry.
	std::cout << "New entry" << std::endl;
	// Load existing .txt file entry.
	std::cout << "Load existing file" << std::endl;
	// Check more information about the app itself.
	std::cout << "About" << std::endl;
	// Input check to navigate around the app.
	std::cout << "Which one to choose?" << " ";
	std::cin >> Input;
}