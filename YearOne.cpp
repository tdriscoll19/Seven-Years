#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearOne::welcome()
{
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::cout << "Welcome to year one " << username << "\n To make it through this year, you will face various challenges \n";
	std::cout << "that center around gaining the basic survival necessities for the population. \n";
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
}

void YearOne::challengeOne(YearOne *user)
{
RETRY:
	std::cout << "Food supply:\n Would you like to invest $100 in farming or train hunter gatherers for free?\n";
	std::cout << "Type your response: \n";
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::string response;
	std::getline(std::cin, response);
	if (!response.compare("farming") || !response.compare("invest"))
	{
		std::cout << "You lost $100, but your population will remain stable throughout the rest of the year,\n";
		std::cout << " pending any other disasters \n";
		invest = true;
	}
	else if (!response.compare("train") || !response.compare("train hunter gatherers") || !response.compare("hunter gatherers"))
	{
		std::cout << "You avoided spending money, but you lost 100 people to animal attacks.\n";
		invest = false;
	}
	else
	{
		std::cout << "input not recognized, try again. \n";
		goto RETRY;
	}
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	adjustValues(user);
	giveSummary(user);
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
}

void YearOne::adjustValues(YearOne *user)
{
	switch (invest)
	{
	case (true):
	{
		user->finances = (user->finances - 100);
		break;
	}
	case (false):
	{
		user->population = (user->population - 100);
		break;
	}
	}
}

void YearOne::giveSummary(YearOne *user)
{
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::cout << "Your totals so far are: \n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	
}

void YearOne::challengeTwo(YearOne *user)
{
	std::cout << "Next Challenge: Water Supply \n";
	std::cout << "Your population needs a stable water source.\n";		
	std::cout << "There are two options: \n";
	std::cout << "\n";
	std::cout << "Option one: gather water from the nearest lake.\n";
	std::cout << "Option two: spend $1000 on a water filtration system.\n";
	AGAIN:
	std::string water;
	std::getline(std::cin, water);
	//while (water.compare("gather") || water.compare("gather water") || water.compare("spend 1000") || water.compare("filtration") || water.compare("water filtration"));
	if (!water.compare("gather") || !water.compare("gather water"))
	{
		std::cout << "No money was spent, but the risk of infection has increased \n";
		gather = true;
	}
	else if (!water.compare("spend 1000") || !water.compare("filtration") || !water.compare("water filtration"))
	{
		std::cout << " You have lost 1000, but at less risk of loss of life\n";
		gather = false;
		finances = finances - 1000;
		giveSummary(user);
	}
	else
	{
		std::cout << "Input not recognized, try again\n";
		goto AGAIN;
	}
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
}

void YearOne::waterDisease()
{
	if (!gather)
		return;
	else
	std::cout << "As in real life, your past decisions can have later consequences\n";
	std::cout << "Because the you didn't regulate how your population gets their water, there is a chance that your population develops a disease\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	int x;
	x = disease();
	RETRY:
	while (x < 102 || x > 300)
	{
		std::cout << "You must pick a number from the chart\n";
		std::cout << "Try again.\n";
		std::cin >> x;
		goto RETRY;
	}
	int y;
	{
		if (x > 100 && x <= 150)
		{
			y = 1;
		}
		else if (x > 150 && x <= 280)
		{
			y = 2;
		}
		else
		{
			y = 3;
		}
	}
	switch (y)
	{
	case (1):
	{
		std::cout << "You were lucky, no sickness developed\n";
		break;
	}
	case (2):
	{
		std::cout << "A disease broke out an killed 20% of your population.\n";
		population = .8*population;
		break;
	}
	case (3):
	{
		std::cout << "A disease developed that decimated 40% of your population.\n";
		population = .6*population;
		break;
	}
	}
	
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
}

int YearOne::disease()
{
	int count;
	int x = 102;
	for (count = 0; count < 100; count++)
	{
		std::cout << x << " ";
		int y;
		y = x % 20;
		if (x % 20 == 0)
		{
			std::cout << "\n";
		}
		x = (x + 2);
	}
	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "Pick a number to determine whether a disease is developed\n";
	int disease;
	std::cin >> disease;
	std::cin.ignore(32767, '\n');

	return disease;
}

void YearOne::endYear(YearOne *user)
{
	std::cout << "Its nearing the end of the year.\n";
	std::cout << "Your population has begun to reflect on the quality of their leadership\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	int x;
	if (gather && !invest)
	{
		x = 1;
	}
	else if (gather && invest)
	{
		x = 2;
	}
	else if (!gather && invest)
	{
		x = 3;
	}
	else
	{
		x = 4;
	}
	switch (x)
	{
	case(1):
	{
		std::cout << "Because you chose to make the people gather their food and water by themselves, they don't think that you have been active in helping them.\n";
		morale = morale - 300;
		break;
	}
	case(2):
	{
		std::cout << "Because you made the people gather their own food, but aided them in gaining water, they are moderately happy with your activity.\n";
		morale = morale - 150;
		break;
	}
	case(3):
	{
		std::cout << "Because you aided people in feeding them, but made them get their own water, they are moderately happy with your activity.\n";
		morale = morale - 150;
		break;
	}
	case(4):
	{
		std::cout << "Because you aided the people in eating and getting water, they are satisfied with your activity\n";
		break;
	}
	}

	std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	giveSummary(user);
}

std::string YearOne::getUser(YearOne *user)
{
	return username;
}

int YearOne::getFinances(YearOne *user)
{
	return finances;
}

int YearOne::getMorale(YearOne *user)
{
	return morale;
}

int YearOne::getPop(YearOne *user)
{
	return population;
}

bool YearOne::getBool(YearOne *user)
{
	return gather;
}