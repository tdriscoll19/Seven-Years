#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"

void YearSix::intro()
{
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "-------------------------------------------------------------------------------------------\n";
	std::cout << "\n";
	std::cout << "Year Six: Appointing Leadership.\n";
	std::cout << "\n";
	std::cout << "Congradulations on reaching year six\n";
	std::cout << "In this year you will face challenges regarding natural disasters.\n";
	std::cout << "Press ENTER to continue.\n";
	std::cin.ignore(32767, '\n');
	std::cout << "\n";
	std::cout << "-------------------------------------------------------------------------------------------\n";
	std::cout << "\n";
	if (haveKids)
	{
		std::cout << "At last, the new generation of kids can be incorporated into the population\n";
		population = population + 400;
		std::cout << "Population has increased by 400 to " << population << ".\n";
		
	}
}

void YearSix::challengeOne(YearThree *user, YearSix *user1)
{
	std::cout << "An epidemic has began in your population.\n";
	if (haveDocs)
	{
		std::cout << "Press ENTER to continue.\n";
		std::cin.ignore(32767, '\n');
		std::cout << "\n";
		std::cout << "-------------------------------------------------------------------------------------------\n";
		std::cout << "\n";
		std::cout << "Because you have doctors, your population stands a chance against the threat.\n";
		getArray(user, user1);
		std::cout << "Appoint a doctor to lead the fight against the illness:\n";
		printArray(user1);
		AGAIN:
		std::getline(std::cin, apot);
		//while (testArray(user1, apot))
		//{
		//	std::cout << "You must enter a name of the doctors, try again.\n";
		//	goto AGAIN;
	//	}
		if (apot == Docs[2] || apot == Docs[3])
		{
			std::cout << "Not a bad choice, Dr. " << apot << " has done a moderate job of managing the situation.\n";
			population = population - 200;
			std::cout << "Up to 200 people have died.\n";
			std::cout << "Press ENTER to continue.\n";
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
		}
		else if (apot == Docs[0])
		{
			std::cout << "Not a bad choice, Dr. " << apot << " has done a decent job of managing the situation.\n";
			population = population - 150;
			std::cout << "Up to 150 people have died.\n";
			std::cout << "Press ENTER to continue.\n";
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
		}
		else
		{
			std::cout << "Bad choice, Dr. " << apot << " has done a poor job of managing the situation.\n";
			population = population - 300;
			std::cout << "Up to 300 people hav died.\n";
			std::cout << "Press ENTER to continue.\n";
			std::cin.ignore(32767, '\n');
			std::cout << "\n";
		}
		/*int l;
		l = Docs.size();
		if (l > 3)
		{
			std::cout << "Not a bad choice, Dr. " << apot << " has done a moderate job of managing the situation.\n";
			population = population - 200;
			std::cout << "Up to 200 people have died.\n";
		}
		else if (l < 3)
		{
			std::cout << "Not a bad choice, Dr. " << apot << " has done a decent job of managing the situation.\n";
			population = population - 150;
			std::cout << "Up to 150 people have died.\n";
		}
		else
		{
			std::cout << "Bad choice, Dr. " << apot << " has done a poor job of managing the situation.\n";
			population = population - 300;
			std::cout << "Up to 300 people hav died.\n";
		}
	}
	else
	{
		std::cout << "Because you failed to invest in doctors, your population never stood a chance in the face of the disease.\n";
		population = 0;*/
	}
}

void YearSix::getArray(YearThree *user, YearSix *user1)
{
	int x;
	x = user->YearThree::getSize1(user);
	if (x > 0)
	{
		Docs.resize(x);
		int count;
		for (count = 0; count < x; count++)
		{
			Docs[count] = user->YearThree::getName3(user);
		}
	}
}

void YearSix::printArray(YearSix *user)
{
	int max;
	max = Docs.size();
	int count;
	for (count = 0; count < max; count++)
	{
		std::cout << "Dr " << count + 1 << ": " << Docs[count] << " \n";
	}
}

bool YearSix::testArray(YearSix *user, std::string x)
{
	int count;
	int max;
	bool exists = false;
	max = Docs.size();
	for (count = 0; count < max; count++)
	{
		if (Docs[count] == x) { exists = true; }
	}
	return exists;
}

void YearSix::giveSummarye(YearSix *user)
{
	std::cout << "\n";
	std::cout << "-------------------------------------------------------------------------------------------\n";
	std::cout << "\n";
	std::cout << "Congradulations on completing year " << year << "\n";
	std::cout << "Your totals so far are: \n";
	std::cout << "\n";
	std::cout << "Finances =       " << user->finances << "\n";
	std::cout << "Morale   =       " << user->morale << "\n";
	std::cout << "Population =     " << user->population << "\n";
	std::cout << "\n";
	std::cout << "-------------------------------------------------------------------------------------------\n";
	std::cout << "\n";
}


int YearSix::getFinances(YearSix *user)
{
	return finances;
}

int YearSix::getMorale(YearSix *user)
{
	return morale;
}

int YearSix::getPop(YearSix *user)
{
	return population;
}

/*std::string YearOne::getUser(YearOne *user)
{
	return username;
} */