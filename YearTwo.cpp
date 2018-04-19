#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearTwo::giveSummary(YearTwo *user)
{
	std::cout << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n";
	std::cout << "Your totals so far are: \n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
}

void YearTwo::challengeOne(YearTwo *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n";
	std::cout << "Year Two: Secondary Surivial Needs.\n";
	std::cout << "\n";
	std::cout << "Congratulations on reaching year two\n";
	std::cout << "In this year you will face challenges with establishing secondary heatlth needs\n";
	std::cout << "throughout your society\n";
	std::cout << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "Problem 1: Eyesight.\n";
	std::cout << "Much of your population is in need of glasses.\n";
	std::cout << "You have three options:\n";
	std::cout << "1. Invest in eyecare (approximately $3500)\n";
	std::cout << "2. Ignore the issue\n";
	std::cout << "3. Appoint someone else to deal with the issue\n";
	std::string x;
	std::getline(std::cin, x);
	int y;
	y = setVal(x);
	std::cout << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n";
	switch (y)
	{
		case(1):
		{
			std::cout << "To determine specifically how much money you spent, you must determine\n";
			std::cout << "how many people need glasses.\n";
			std::cout << "Insert a number between 1 and 10\n";
			int n;
			std::cin >> n;
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
			TRY:
			while (n <= 0 || n > 10)
			{
				std::cout << "Value must be between 1 and 10. Try again.\n";
				std::cin >> n;
				goto TRY;
			}
			popGlasses(n);
			break;
		}
		case (2):
		{
			std::cout << "To determine how much of your population you neglected, you must determine\n";
			std::cout << "how many people needed glasses.\n";
			std::cout << "Insert a number between 1 and 10\n";
			int n;
			std::cin >> n;
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
		TRY2:
			while (n <= 0 || n > 10)
			{
				std::cout << "Value must be between 1 and 10. Try again.\n";
				std::cin >> n;
				goto TRY2;
			}
			popMad(n);
			break; 
		}
		case (3):
		{
			makeArray();
			break;
		}
	}

}

int YearTwo::setVal(std::string x)
{
START:
	int y;
	if (!x.compare("Invest") || !x.compare("invest") || !x.compare("invest in eyecare"))
	{
		y = 1;
		
	}
	else if (!x.compare("Ignore") || !x.compare("ignore") || !x.compare("ignore the issue"))
	{
		y = 2;
	}
	else if (!x.compare("Appoint") || !x.compare("appoint") || !x.compare("appoint someone else"))
	{
		y = 3;
	}
	else
	{
		std::cout << "Input not recognized, try again\n";
		std::getline(std::cin, x);
		goto START;
	}
	return y; 
}

void YearTwo::popGlasses(int n)
{
	switch(n)
	{ 
		case (1):
	{
		std::cout << "Ten percent of your population needs glasses\n";
		std::cout << "This will cost $" << population << "\n";
		finances = finances - population;
		break;
	}
		case (2):
		{
		std::cout << "Ten percent of your population needs glasses\n";
		std::cout << "This will cost $" << population << "\n";
		finances = finances - population;
		break;
		}
		case (3):
		{
			std::cout << "Ten percent of your population needs glasses\n";
			std::cout << "This will cost $" << population << "\n";
			finances = finances - population;
			break;
		}
		case (4):
		{
			std::cout << "Ten percent of your population needs glasses\n";
			std::cout << "This will cost $" << population << "\n";
			finances = finances - population;
			break;
		}
		case (5):
		{
			std::cout << "Ten percent of your population needs glasses\n";
			std::cout << "This will cost $" << population << "\n";
			finances = finances - population;
			break;
		}
		case (6):
		{
			std::cout << "Only five percent of your population needs glasses.\n";
			std::cout << "this will cost $" << population / 2 << "\n";
			finances = finances - (population / 2);
			break;
		}
		case (7):
		{
			std::cout << "Only five percent of your population needs glasses.\n";
			std::cout << "this will cost $" << population / 2 << "\n";
			finances = finances - (population / 2);
			break;
		}
		case (8):
		{
			std::cout << "Fifteen percent of your population needs glasses\n";
			std::cout << "This will cost $" << population * 1.5 << "\n";
			finances = finances - (population *1.5);
			break;
		}
		case (9):
		{
			std::cout << "Fifteen percent of your population needs glasses\n";
			std::cout << "This will cost $" << population * 1.5 << "\n";
			finances = finances - (population *1.5);
			break;
		}
		case (10):
		{
			std::cout << "Fifteen percent of your population needs glasses\n";
			std::cout << "This will cost $" << population * 1.5 << "\n";
			finances = finances - (population *1.5);
			break;
		}
		}
}

void YearTwo::popMad(int n)
{
	switch (n)
	{
	case (1):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (2):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (3):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (4):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (5):
	{
		std::cout << "Ten percent of your population needed glasses\n";
		bool aggro = true;
		break;
	}
	case (6):
	{
		std::cout << "Only five percent of your population needs glasses.\n";
		break;
	}
	case (7):
	{
		std::cout << "Only five percent of your population needs glasses.\n";
		break;
	}
	case (8):
	{
		std::cout << "Fifteen percent of your population needs glasses\n";
		bool aggro = true;
		bool superAggro = true;
		break;
	}
	case (9):
	{
		std::cout << "Fifteen percent of your population needs glasses\n";
		bool aggro = true;
		bool superAggro = true;
		break;
	}
	case (10):
	{
		std::cout << "Fifteen percent of your population needs glasses\n";
		bool aggro = true;
		bool superAggro = true;
		break;
	}
	}
}

std::string YearTwo::getName()
{
	static int x;

	std::cout << "Insert the name for eyedoctor #" << x + 1 << "\n";
	std::string name;
	std::getline(std::cin, name);
	x++; 
	return name;
}

void YearTwo::makeArray()
{
	std::cout << "How many people do you want to assign to the job\n";
	RETRY:
	int doc;
	std::cin >> doc;
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	while (doc <= 0 || doc > 10)
	{
		std::cout << "You must input an integer value greater than 0 and less than ten. Try Again\n";
		goto RETRY;
	}
	if (doc > 2 && morale < 800)
	{
		bool coupThreat = true;
	}
	optos.resize(doc);
	int count;
	for (count = 0; count < doc; count++)
	{
		optos[count] = getName();
	}
}

void YearTwo::outputArray()
{
	int count;
	int total;
	total = optos.size();
	for (count = 0; count < total; count++)
	{
		std::cout << "Dr " << count + 1 << " " << optos[count] << "\n";
	}
}

void YearTwo::challengeTwo(YearTwo *user)
{
	std::cout << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n";
	std::cout << "Many of the people in your population are beginning\n";
	std::cout << "to wonder if it is OK for them to have kids.\n";
	std::cout << "Would you like to ban or allow such action\n";
RETRY:
	std::string kids;
	std::getline(std::cin, kids);
	if (!kids.compare("ban"))
	{
		haveKids1 = false;
		std::cout << "You have avoided the financial burden of supporting children.\n";
	}
	else if (!kids.compare("allow"))
	{
		std::cout << "The children will be a financial burden until they can exist on their own\n";
		std::cout << "At age 4 (year 6)\n";
		haveKids1 = true;
		std::cout << "Until year 6, your finances will decrease by 15% annually.\n";
		finances = .85* finances;
		giveSummary(user);
	}
	else
	{
		std::cout << "Invalid input detected, try again\n";
		goto RETRY;
	}
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
}

void YearTwo::challengeThree(YearTwo *user)
{
	std::cout << "\n";
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std::cout << "\n";
	std::cout << "Next challenge: Education\n";
	std::cout << "Would you like to invest in schools?\n";
	RETRY:
	std::string school;
	std::getline(std::cin, school);
	if (!school.compare("yes"))
	{
		educationLevel = schoolFunding();
	}
	else if (!school.compare("no"))
	{
		std::cout << "You choose to not invest in schools\n.";
	}
	else
	{
		std::cout << "Invalid input detected, try again\n";
		goto RETRY;
	}
}

		
	int YearTwo::schoolFunding()
	{
		RESTART:
		std::cout << "How much would you like to invest in schools?\n";
		int x;
		std::cin >> x;
		std::cin.ignore(32767, '\n');
		while (x > .3 * finances)
		{
			std::cout << "That's too risky of an investment, try again.\n";
			goto RESTART;
		}
		if (x > .2 * finances)
		{
			std::cout << "Your population will be highly educated.\n";
			finances = finances - x;
			return 3;
		}
		else if (x > .1 * finances && x < .2 * finances)
		{
			finances = finances - x;
			std::cout << "Your population will be moderately educated.\n";
			return 2;
		}
		else
		{
			finances = finances - x;
			std::cout << "Your population will have a low level of education.\n";
			return 1;
		}

	}

	void YearTwo::reccurrentIssues(YearTwo *user)
	{
		std::cout << "\n";
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		std::cout << "\n";
		if (!invested)
		{
			std::cout << "Your population still faces issues with its water supply.\n";
			std::cout << "Consequently, there is a chance of diseasing breaking out again.\n";
			std::cout << "It is lower this time due to the development of immunities.\n";
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
				if (x > 100 && x <= 220)
				{
					y = 1;
				}
				else if (x > 220 && x <= 260)
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
		}
	}

	int YearTwo::disease()
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
		std::cout << "Pick a number to determine whether a disease is developed\n";
		int disease;
		std::cin >> disease;
		std::cin.ignore(32767, '\n');

		return disease;
	}

	void YearTwo::summaryTwo(YearTwo *user)
	{
		std::cout << "Press ENTER to continue.\n";
		std::cin.ignore(32767, '\n');
		std::cout << "\n";
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		std::cout << "\n";
		int x;
		switch (haveKids1)
		{
		case (true):
		{
			x = 1;
			std::cout << "Your population respects your allowance of them to have kids\n";
			break;
		}
		case (false):
		{
			if (aggro)
			{
				x = 3;
				break;
			}
			else if (superAggro)
			{
				x = 4;
				break;
			}
			else if (educationLevel == 1 || educationLevel == 0)
			{
				x = 2;
				break;
			}
			else if (educationLevel == 2 || educationLevel == 3)
			{
				std::cout << "Your population is appreciative of the education\n";
				std::cout << "that you have given them.\n";
				x = 1;
				break;
			}
		}
		}
		/* if (haveKids)
		{
			x = 1;
			std::cout << "Your population respects your allowance of them to have kids\n";
			goto END;
		}
		if (aggro && !haveKids)
		{
			x = 3;
			goto END;
		}
		if (superAggro && !haveKids)
		{
			x = 4; 
			goto END;
		}
		if ((educationLevel == 1 || educationLevel == 0) && !haveKids && !aggro && !superAggro)
		{
			x = 2;
			goto END;
		}
		if ((educationLevel == 3 || educationLevel == 2) && !haveKids && !aggro && !superAggro)
		{
			std::cout << "Your population is appreciative of the education\n";
			std::cout << "that you have given them.\n";
			x = 1;
			goto END;
		}
	END: */
		std::cout << "Press ENTER to continue.\n";
		std::cin.ignore(32767, '\n');
		switch (x)
		{
		case (1):
		{
			std::cout << "You have increased morale by 100\n";
			morale = morale + 100;
			break;
		}
		case (2):
		{
			std::cout << "Your population is unsure how to interpret your changes.\n";
			std::cout << "The level of morale is constant\n";
			break;
		}
		case (3):
		{
			std::cout << "Your population is frustrated with the lack of eyecare.\n";
			std::cout << "Morale has decreased by 75\n";
			morale = morale - 75;
			break;
		}
		case (4):
		{
			std::cout << "Your population is very frustrated with the lack of eyecare.\n";
			std::cout << "Morale has decreased by 150\n";
			morale = morale - 150;
			break;
		}
		}
	}

	void YearTwo::giveSummarye(YearTwo *user)
	{
		std::cout << "\n";
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		std::cout << "\n";
		std::cout << "Congradulations on completing year " << year << "\n";
		std::cout << "Your totals so far are: \n";
		std::cout << "\n";
		std::cout << "Finances =       " << user->finances << "\n";
		std::cout << "Morale   =       " << user->morale << "\n";
		std::cout << "Population =     " << user->population << "\n";
		std::cout << "\n";
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		std::cout << "\n";
	}

	std::string YearTwo::getUser(YearTwo *user)
	{
		return username;
	}

	int YearTwo::getFinances(YearTwo *user)
	{
		return finances;
	}

	int YearTwo::getMorale(YearTwo *user)
	{
		return morale;
	}

	int YearTwo::getPop(YearTwo *user)
	{
		return population;
	}

	int YearTwo::getEdu(YearTwo *user)
	{
		return educationLevel;
	}

	bool YearTwo::coupthreat(YearTwo *user)
	{
		return coupThreat;
	}

	bool YearTwo::Invested(YearTwo *user)
	{
		return invested;
	}

	bool YearTwo::havekids(YearTwo *user)
	{
		return haveKids1;
	}

	int YearTwo::getSize(YearTwo *user)
	{
		return optos.size();
	}

	std::string YearTwo::getName2(YearTwo *user)
	{
		static int x;
		std::string pass;
		pass = optos[x];
		x++;
		return pass;

	}