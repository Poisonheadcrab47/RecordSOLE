#include <iostream>
#include "main_menu.h"

using namespace std;

int main()
{
	string myinput = "";

	MainMenu::ShowMainTitle();
	MainMenu::ShowMenuOptions(myinput);
	return 0;
}