#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearFive::giveSummary(YearFive *user)
{
	std::cout << "Your totals so far are: \n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
}

void YearFive::challengeOne(YearFive *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "###########################################################################################\n";
	std::cout << "\n";
	std::cout << "Year Five: Financial Crisis.\n";
	std::cout << "\n";
	std::cout << "Congratulations on reaching year five\n";
	std::cout << "A massive economic failure just occured, you must recover your economy.\n";
	finances = finances * .25;
	std::cout << "Your finances have been reduced by 75% to $" << finances << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "###########################################################################################\n";
	std::cout << "\n";
	std::cout << "What economic approach do you want to take to solve this issue.\n";
	std::cout << "a. Adopt deficit spending.\n";
	std::cout << "b. Cut back current spending.\n";
	RETRY:
	std::string response;
	std::getline(std::cin, response);
	if (!response.compare("a") || !response.compare("deficit spending"))
	{
		std::cout << "Your spending policies have resulted an a negative balance.\n";
		std::cout << "Because of the rules of the game, you have lost\n";
		finances = finances - (finances * 2);
	}
	else if (!response.compare("b") || !response.compare("cut back"))
	{
		std::cout << "Good choice.\n";
		std::cout << "Press ENTER to continue.\n";
		std::cin.ignore(32767, '\n');
		std::cout << "\n";
		std::cout << "###########################################################################################\n";
		std::cout << "\n";
		std::cout << "Because you cut back on various programs, your finances have grown by 30%\n";
		finances = finances * 1.3;
		std::cout << "finances = $" << finances << "\n";
		std::cout << "However, these cut backs caused a loss of safety.\n";
		std::cout << "This led to 100 people dying.\n";
		population = population - 100;
	}
	else
	{
		std::cout << "input not recognized, try again\n";
		goto RETRY;
	}
}

void YearFive::challengeTwo(YearFive *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "###########################################################################################\n";
	std::cout << "\n";
	std::cout << "You also have an option to hire outside aid to help your population throught the crisis.\n";
	std::cout << "Would you like to hire a group of financial advisors to oversee your population\n";
	std::cout << "They will cost $300 total.\n";
	RETRY:
	std::string a;
	std::getline(std::cin, a);
	if (!a.compare("yes"))
	{
		std::cout << "How many advisors would you like?\n";
		DO:
		int x;
		std::cin >> x;
		while (x < 1 || x > 7);
		{
			std::cout << "You must pick between 1 and 7 advisors\n";
			goto DO;
		}
		std::cin.ignore(32767, '\n');
		financials.resize(x);
		setnames(x);
		finances = finances - 300;
		advisors = true;
	}
	else if (!a.compare("no"))
	{
		std::cout << "You avoided the expense of advisors\n";
		std::cout << "Unfortunately, this caused morale to fall by 100.\n";
		morale = morale - 100;
	}
	else
	{
		std::cout << "input not recognized, try again.\n";
		goto RETRY;
	}
}

void YearFive::setnames(int max)
{
	int count;
	for (count = 0; count < max; count++)
	{
		std::cout << "input the name for advisor #" << count + 1 << "\n";
		std::string names;
		std::getline(std::cin, names);
		financials[count] = names;
	}
}

void YearFive::challengeThree(YearFive *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "###########################################################################################\n";
	std::cout << "\n";
	std::cout << "Enter a whole number between one and twenty\n";
restart:
	int n;
	std::cin >> n;
	std::cin.ignore(32767, '\n');
	while (n < 1 || n > 20)
	{
		std::cout << "You must enter an integer between 1 and 20.\n";
		std::cout << "Try again.\n";
		goto restart;
	}

	switch (n)
	{
	case (1):
	case (2):
	case (3):
	case (10):
	case (11):
	case (12):
	case (13):
	case (20):
	case (14):
	case (15):
	case (16):
	case (17):
	{
		std::cout << "Congradulations! You happened to find gold under the land that your population is situated.\n";
		std::cout << "This could save your economy, if it is properly mannaged.\n";
		strikeGold = true;
		regulation(user);
		break;
	}
	case (4):
	case (5):
	case (6):
	case (7):
	case (8):
	case (9):
	case (18):
	case (19):
	{
		std::cout << "You failed to find any mineral resources of use\n";
		strikeGold = false;

		if (advisors);
		{
			std::cout << "Because you appointed fiancial advisors, your finances are still positive\n";
		}
		if (!advisors); 
		{
			std::cout << "You failed to find any resources, and your finances have plunged below 0\n";
			finances = -20;
		}


		break;
	}
	}
}

void YearFive::regulation(YearFive *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "###########################################################################################\n";
	std::cout << "\n";
	std::cout << "You can either pick from a\n";
	std::cout << "Loose\n";
	std::cout << "or Strict\n";
	std::cout << "style of management\n";
	RET:
	std::string x;
	std::getline(std::cin, x);
	if (!x.compare("loose"))
	{
		std::cout << "Although your finances increased by $2000, 300 people have died in the rush to the mines.\n";
		population = population - 300;
		finances = finances + 2000;
	}
	else if (!x.compare("strict"))
	{
		std::cout << "\n";
		std::cout << "Your population feels like you overregulated the process.\n";
		std::cout << "Morale fell 300, but your finances increased by $1500\n";
		std::cout << "\n";
		morale = morale - 300;
		finances = finances + 1500;
	}
	else
	{
		std::cout << "Improper input detected, try again\n";
		goto RET;
	}
}

void YearFive::recurrentIssues(YearFive *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "###########################################################################################\n";
	std::cout << "\n";
	if (haveKids)
	{
		std::cout << "Your finances decreased by 15% again because of your decision to have kids.\n";
		std::cout << "\n";
		finances = finances * .85;
	}
	if (haveDocs || advisors)
	{
		std::cout << "Due to your investments in doctors and financial advisors,\n";
		std::cout << "your population has grown appreciative of your efforts, morale has increased by 100\n";
		morale = morale + 100;
	}
	if (advisors && strikeGold)
	{
		std::cout << "Due to your discovery of gold and the presence of advisors to manage it,\n";
		std::cout << "your finances have increased by 5%\n";
		finances = finances * 1.05;
	}
}

void YearFive::giveSummarye(YearFive *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "############################################################################################\n";
	std::cout << "\n";
	std::cout << "Congradulations on completing year " << year << "\n";
	std::cout << "Your totals so far are: \n";
	std::cout << "\n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
	std::cout << "\n";
	std::cout << "############################################################################################\n";
	std::cout << "\n";
}


int YearFive::getFinances(YearFive *user)
{
	return finances;
}

int YearFive::getMorale(YearFive *user)
{
	return morale;
}

int YearFive::getPop(YearFive *user)
{
	return population;
}


std::string YearFive::getUser(YearFive *user)
{
	return username;
}

bool YearFive::haveKids1(YearFive *user)
{
	return haveKids;
}

bool YearFive::haveDocs1(YearFive *user)
{
	return haveDocs;
}

bool YearFive::haveAds(YearFive *user)
{
	return advisors;
}

