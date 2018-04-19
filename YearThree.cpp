#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearThree::giveSummary(YearThree *user)
{
	std::cout << "Your totals so far are: \n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
}

void YearThree::challengeOne(YearThree *user)
{
	//std::cout << kids;
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	std::cout << "Year Three: Tertiary Surivial Needs.\n";
	std::cout << "\n";
	std::cout << "Congratulations on reaching year three\n";
	std::cout << "In this year you will face challenges with establishing higher level survival needs.\n";
	std::cout << "throughout your society\n";
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	std::cout << "Your society has developed to the point at which it needs reliable energy supplies.\n";
	std::cout << "Three options exist:\n";
	std::cout << "1. Attain fossil fuels\n";
	std::cout << "2. Build windmills\n";
	std::cout << "3. Invest in solar panels\n";
	RETRY:
	std::string energy;
	std::getline(std::cin, energy);
	if (!energy.compare("1") || !energy.compare("attain"))
	{
		std::cout << "\n";
		std::cout << "You have established a reliable energy source.\n";
		std::cout << "This cost $2500, and 300 lives to mining accidents.\n";
		finances = finances - 2500;
		population = population - 300;
		std::cout << "However, people are generally satisfied with the energy\n";
	}
	else if (!energy.compare("2") || !energy.compare("build"))
	{
		std::cout << "\n";
		std::cout << "You have established a moderately efficient energy source.\n";
		std::cout << "inconsistencies cause morale to fall by 250.\n";
		std::cout << "meanwhile, you lost $2000 in construction.\n";
		finances = finances - 2000;
		morale = morale - 250;
	}
	else if (!energy.compare("3") || !energy.compare("invest"))
	{
		std::cout << "\n";
		std::cout << "You have established an innefficient energy source at a high cost.\n";
		std::cout << "You spent $4000 and lost 300 morale\n";
		finances = finances - 4000;
		morale = morale - 300;
	}
	else
	{
		std::cout << "invalid input detected, try again\n";
		goto RETRY;
	}
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	giveSummary(user);
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
}

void YearThree::getArray(YearTwo *user, YearThree *user1)
{
	int x;
	x = user->YearTwo::getSize(user);
	if (x > 0)
	{
		optos3.resize(x);
		int count;
		for (count = 0; count < x; count++)
		{
			optos3[count] = user->YearTwo::getName2(user);
		}
		/*int count1;
		int total;
		total = optos3.size();
		for (count1 = 0; count1 < total; count1++)
		{
			std::cout << "Dr " << count1 + 1 << " " << optos3[count1] << "\n";
		}
		*/
	}
	else
	{
		doctors = false;
	}
}

void YearThree::challengeTwo(YearThree *user)
{
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	
	if (doctors)
	{
		std::cout << "The eye doctors that you appointed: \n";
		int count;
		int total;
		total = optos3.size();
		for (count = 0; count < total; count++)
		{
			std::cout << "Dr. " << optos3[count] << "\n";
		}
		std::cout << "Are demanding $6000 to construct glasses for the population.\n";
		std::cout << "You can either: 1. pay this amount, or: 2. negotiate for less.\n";
		RETRY:
		std::string pay;
		std::getline(std::cin, pay);
		if (!pay.compare("1") || !pay.compare("pay"))
		{
			finances = finances - 6000;
			std::cout << "New bank account: " << finances << "\n";
		}
		else if (!pay.compare("2") || !pay.compare("negotiate"))
		{
			std::cout << "\n";
			std::cout << "===========================================================================================\n";
			std::cout << "\n";
			std::cout << "The doctors refuse to negotiate and have quit.\n";
			morale = morale * .65;
			std::cout << "35% of your morale has been lost.\n";
			std::cout << "morale: " << morale << "\n";
		}
		else
		{
			std::cout << "invalid input detected, try again\n";
			goto RETRY;
		}
	}
	else
	{
		std::cout << "Because you chose to not appoint others to deal\n";
		std::cout << "with the issue of eyecare, you avoided a challenge for\n";
		std::cout << "this level.\n";
	}
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
}

void YearThree::challengeThree(YearThree *user)
{
	std::cout << "You now have the oppurtunity to invest in doctors.\n";
	std::cout << "Would you like to invest in doctors for $750? They can solve certain recurrent issues\n";
	//std::cout << "decisions that have been made.\n";
	RET:
	std::string docs;
	std::getline(std::cin, docs);
	if (!docs.compare("yes"))
	{
		rdoctors = true;
		finances = finances - 750;
		makeArray(user);
	}
	else if (!docs.compare("no"))
	{
		rdoctors = false;
		std::cout << "You avoided spending money on doctors.\n";
	}
	else
	{
		std::cout << "Invalid input detected, try again\n";
		goto RET;
	}
}

void YearThree::makeArray(YearThree *user)
{
	std::cout << "How many doctors do you want?\n";
RETRY:
	int doc;
	std::cin >> doc;
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	while (doc <= 3 || doc > 10)
	{
		std::cout << "You must input an integer value greater than 3 and less than ten. Try Again\n";
		goto RETRY;
	}
	realdocs.resize(doc);
	int count;
	for (count = 0; count < doc; count++)
	{
		realdocs[count] = getNameDoc();
	}
	int count1;
	int total;
	total = realdocs.size();
	for (count1 = 0; count1 < total; count1++)
	{
		std::cout << "Dr " << count1 + 1 << " " << realdocs[count1] << "\n";
	}
}

std::string YearThree::getNameDoc()
{
	static int x;

	std::cout << "Insert the name for eyedoctor #" << x + 1 << "\n";
	std::string name;
	std::getline(std::cin, name);
	x++;
	return name;
}

void YearThree::recurringIssues(YearThree *user)
{
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	if (kids)
	{
		std::cout << "Your finances decreased by 15% due to your choice to allow childbirth.\n";
		std::cout << "\n";
		finances = finances * .85;
	}
	if (!invest && !rdoctors)
	{
		std::cout << "There is again another risk of infection because of\n";
		std::cout << "your population's mode water supply\n";
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
	else if (!invest && educationLevel < 2)
	{
		std::cout << "Regardless of your investment in doctors, your low level of education\n";
		std::cout << "due to your lack of investment in schools rendered them useless.\n";
		std::cout << "Morale decreased by 50% as a result, and you face another risk of infection.\n";
		morale = morale * .5;
		int x;
		x = disease();
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
	else if (invest || (educationLevel > 1 && rdoctors))
	{
		std::cout << "Because of investment in water filtration or your investments in\n";
		std::cout << "doctors and schools, you will not face a threat of disease.\n";
		diseased = false;
	}
}

int YearThree::disease()
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

void YearThree::giveSummarye(YearThree *user)
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
	std::cout << "Congradulations on completing year " << year << "\n";
	std::cout << "Your totals so far are: \n";
	std::cout << "\n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
	std::cout << "\n";
	std::cout << "===========================================================================================\n";
	std::cout << "\n";
}


int YearThree::getFinances(YearThree *user)
{
	return finances;
}

int YearThree::getMorale(YearThree *user)
{
	return morale;
}

int YearThree::getPop(YearThree *user)
{
	return population;
}

bool YearThree::Invested(YearThree *user)
{
	return invest;
}

std::string YearThree::getUser(YearThree *user)
{
	return username;
}

bool YearThree::doctor(YearThree *user)
{
	return doctors;
}

bool YearThree::haveKids(YearThree *user)
{
	return kids;
}

int YearThree::getSize(YearThree *user)
{
	return optos3.size();
}

std::string YearThree::getName2(YearThree *user)
{
	static int x;
	std::string pass;
	pass = optos3[x];
	x++;
	return pass;

}

bool YearThree::water(YearThree *user)
{
	return diseased;
}

int YearThree::getSize1(YearThree *user)
{
	return realdocs.size();
}

std::string YearThree::getName3(YearThree *user)
{
	static int x;
	std::string pass;
	pass = realdocs[x];
	x++;
	return pass;

}