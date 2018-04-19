#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearSeven::Evaluation(YearSeven *user)
{
	std::cout << "Congratulations, you made it to the final stage and beat the game!\n";
	std::cout << "Here are your totals:\n";
	std::cout << "\n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
	std::cout << "\n";
	std::cout << "Added together, this gives you a total score of " << finances + morale + population << "\n";

}