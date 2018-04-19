#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"


void YearFour::giveSummary(YearFour *user)
{
	std::cout << "Your totals so far are: \n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
}

void YearFour::challengeOne(YearThree *user1, YearFour *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "\n";
	std::cout << "Year Four: Controlling Uprisings.\n";
	std::cout << "\n";
	std::cout << "Congratulations on reaching year four\n";
	std::cout << "In this year you will face challenges with internal issues.\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "\n";
	if (doctors)
	{
		getArray(user1, user);
		std::string x = optos4[0];
		std::cout << "The eye doctors that you appointed, led by " << optos4[0] << " are unhappy with your leadership\n";
		std::cout << "They are staging an uprising\n";
		std::cout << "/n";
		if (((finances / 10) + morale + population) < 1500)
		{
			std::cout << "The status of your society has caused for 65% of your people ( " << .65 * population << " ) to side against you\n";
			against = true;
		}
		else if (((finances / 10) + morale + population) >= 1500)
		{
			std::cout << "The status of your society has caused for 35% of your people ( " << .35 * population << " ) to side against you\n";
			against = false;
		}
		std::cout << "\n";
		std::cout << "You have two options of how to handle this issue:\n";
		std::cout << "A. Attempt compromise\n";
		std::cout << "B. Poison the water supply of the opposition\n";
		RETRY:
		std::string response;
		std::getline(std::cin, response);
		if ((!response.compare("a") || !response.compare("compromise")) && against) { rebellion(1);}
		else if ((!response.compare("a") || !response.compare("compromise")) && !against) { rebellion(2); }
		else if ((!response.compare("b") || !response.compare("poison")) && against) { rebellion(3); }
		else if ((!response.compare("b") || !response.compare("poison")) && !against) { rebellion(4); }
		else
		{
			std::cout << "Improper input detected, try again\n";
			goto RETRY;
		}
	}
	else if (!doctors)
	{
		std::cout << "Because of your past decisions, this year is relatively peaceful.\n";
	}
}

void YearFour::getArray(YearThree *user, YearFour *user1)
{
	int x;
	x = user->YearThree::getSize(user);
	if (x > 0)
	{
		optos4.resize(x);
		int count;
		for (count = 0; count < x; count++)
		{
			optos4[count] = user->YearThree::getName2(user);
		}
	}
}

void YearFour::rebellion(int x)
{
	switch (x)
	{
	case(1):
	{
		std::cout << "Your population has lost all respect for you. Your morale has been decimated\n";
		morale = morale * -1;
		break;
	}
	case(2):
	{
		std::cout << "Your population is dissatisfied with your weak leadership.\n";
		morale = morale - 500;
		break;
	}
	case(3):
	{
		std::cout << "Although your population fell substantially, those that remain appreciate your strong leadership.\n";
		std::cout << "Those one the opposition have died, but morale has increased by 1000.\n";
		morale = morale + 1000;
		population = population * .35;
		break;
	}
	case(4):
	{
		std::cout << "Many of your population have died, those that remain have much higher respect for your leadership.\n";
		std::cout << "Those on the opposition have dies, but morale has increased by 400\n";
		morale = morale + 400;
		population = population * .35;
		break;
	}
	}

}

void YearFour::recurringIssues(YearFour *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "\n";
	if (kids)
	{
		std::cout << "Your finances decreased by 15% due to your choice to allow childbirth.\n";
		finances = finances * .85;
	}
	if (disease)
	{

		int x;
		x = testIllness();
	RETRY1:
		while (x < 102 || x > 300)
		{
			std::cout << "You must pick a number from the chart\n";
			std::cout << "Try again.\n";
			std::cin >> x;
			goto RETRY1;
		}
		int y;
		{
			if (x > 100 && x <= 120)
			{
				y = 3;
			}
			else if (x > 120 && x <= 160)
			{
				y = 2;
			}
			else
			{
				y = 1;
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

	}
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "\n";
}

int YearFour::testIllness()
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
	std::cout << "The annual threat of developing a disease from the faulty water supply has returned\n";
	std::cout << "Due to immunity developing over time, this will be the last year that you will face this risk\n";
	std::cout << "Pick a number to determine whether a disease is developed\n";
	int disease;
	std::cin >> disease;
	std::cin.ignore(32767, '\n');

	return disease;
}

void YearFour::giveSummarye(YearFour *user)
{
	std::cout << "\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "\n";
	std::cout << "Congradulations on completing year " << year << "\n";
	std::cout << "Your totals so far are: \n";
	std::cout << "\n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
	std::cout << "\n";
	std::cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	std::cout << "\n";
}

int YearFour::getFinances(YearFour *user)
{
	return finances;
}

int YearFour::getMorale(YearFour *user)
{
	return morale;
}

int YearFour::getPop(YearFour *user)
{
	return population;
}

bool YearFour::Invested(YearFour *user)
{
	return invest;
}

std::string YearFour::getUser(YearFour *user)
{
	return username;
}

bool YearFour::haveKids(YearFour *user)
{
	return kids;
}

bool YearThree::haveDocs(YearThree *user)
{
	return rdoctors;
}