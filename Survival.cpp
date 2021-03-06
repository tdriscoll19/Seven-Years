#include "stdafx.h"
#include <iostream>
#include <initializer_list>
#include <array>
#include <string>
#include <algorithm>
#include <vector>
#include "Surve.h"


int main()
{
	Opener();
	std::string username;
	username = InputName();
	std::cout << "Your Name is " << username << "\n";
	YearOne *playerOne = new YearOne {username, 10000, 1000, 1000};
	playerOne->welcome();
	playerOne->challengeOne(playerOne); 
	playerOne->challengeTwo(playerOne);
	playerOne->waterDisease();
	playerOne->endYear(playerOne);
	YearTwo *playerOne2 = new YearTwo {playerOne->getUser(playerOne), playerOne->getFinances(playerOne),
										playerOne->getMorale(playerOne), playerOne->getPop(playerOne), playerOne->getBool(playerOne)};
	//playerOne2->giveSummary(playerOne2);
	playerOne2->challengeOne(playerOne2);
	playerOne2->outputArray();
	playerOne2->challengeTwo(playerOne2);
	playerOne2->challengeThree(playerOne2);
	playerOne2->reccurrentIssues(playerOne2);
	playerOne2->summaryTwo(playerOne2);
	playerOne2->giveSummarye(playerOne2);
	YearThree *playerOne3 = new YearThree{playerOne2->getUser(playerOne2), playerOne2->getFinances(playerOne2),
		playerOne2->getMorale(playerOne2), playerOne2->getPop(playerOne2), playerOne2->getEdu(playerOne2), playerOne2->coupthreat(playerOne2), playerOne2->Invested(playerOne2), playerOne2->havekids(playerOne2) };
	//playerOne3->giveSummary(playerOne3);
	playerOne3->challengeOne(playerOne3);
	playerOne3->getArray(playerOne2, playerOne3);
	playerOne3->checkdeath(playerOne3);
	playerOne3->challengeTwo(playerOne3);
	playerOne3->checkdeath(playerOne3);
	playerOne3->challengeThree(playerOne3);
	playerOne3->checkdeath(playerOne3);
	playerOne3->recurringIssues(playerOne3);
	playerOne3->checkdeath(playerOne3);
	playerOne3->giveSummarye(playerOne3);
	YearFour *playerOne4 = new YearFour{ playerOne3->getUser(playerOne3), playerOne3->getFinances(playerOne3),
		playerOne3->getMorale(playerOne3), playerOne3->getPop(playerOne3),playerOne3->Invested(playerOne3), playerOne3->haveKids(playerOne3), playerOne3->doctor(playerOne3), playerOne3->water(playerOne3)};
	playerOne4->challengeOne(playerOne3, playerOne4);
	playerOne4->checkdeath(playerOne4);
	playerOne4->giveSummary(playerOne4);
	playerOne4->recurringIssues(playerOne4);
	playerOne4->checkdeath(playerOne4);
	playerOne4->giveSummarye(playerOne4);
	YearFive *playerOne5 = new YearFive{ playerOne4->getUser(playerOne4), playerOne4->getFinances(playerOne4), playerOne4->getMorale(playerOne4), playerOne4->getPop(playerOne4),
		playerOne4->Invested(playerOne4), playerOne4->haveKids(playerOne4),
		playerOne3->haveDocs(playerOne3)};
	playerOne5->challengeOne(playerOne5);
	playerOne5->checkdeath(playerOne5);
	playerOne5->giveSummary(playerOne5);
	playerOne5->challengeTwo(playerOne5);
	playerOne5->checkdeath(playerOne5);
	playerOne5->giveSummary(playerOne5);
	playerOne5->challengeThree(playerOne5);
	playerOne5->checkdeath(playerOne5);
	playerOne5->giveSummary(playerOne5);
	playerOne5->recurrentIssues(playerOne5);
	playerOne5->checkdeath(playerOne5);
	playerOne5->giveSummarye(playerOne5);
	YearSix *playerOne6 = new YearSix{ playerOne5->getUser(playerOne5), playerOne5->getFinances(playerOne5), playerOne5->getMorale(playerOne5), playerOne5->getPop(playerOne5),
		playerOne5->haveAds(playerOne5), playerOne5->haveKids1(playerOne5),
		playerOne5->haveDocs1(playerOne5) };
	playerOne6->intro();
	playerOne6->challengeOne(playerOne3, playerOne6);
	playerOne6->checkdeath(playerOne6);
	//playerOne6->giveSummarye(playerOne6);
	YearSeven *playerOne7 = new YearSeven{ playerOne6->getFinances(playerOne6), playerOne6->getMorale(playerOne6), playerOne6->getPop(playerOne6), playerOne->getUser(playerOne) };
	playerOne7->Evaluation(playerOne7);
	int x;
	std::cin >> x;
    return 0;
}

void Opener()
{
	std::cout << "\n";
	std::cout << "****************************************************************************************************\n";
	std::cout << "\n";
	std::cout << "Welcome to 7 Years Survival! \n";
	std::cout << "In this survival- simulation game you will be tasked with leading an isolated society \n";
	std::cout << "of 1000 people through seven years in the wilderness. \n";
	std::cout << "\n";
	std::cout << "****************************************************************************************************\n";
	std::cout << "\n";
	std::cout << "To do this, you must make a series of correct decisions that maintain three factors: \n";
	std::cout << "\n";
	std::cout << "Population size \n";
	std::cout << "Morale \n";
	std::cout << "Finances \n";
	std::cout << "Press ENTER to continue.\n";
	std::cout << "Please type your responses lowercase and with a single word that is most logical to the question\n";
	std::cin.ignore(32767, '\n');
}

std::string InputName()
{
Start:
	std::string username;
	std::cout << "Please enter your name: \n";
	std::getline(std::cin, username);
	std::cout << "Ok " << username << " Are you ready? \n";
	std::string x; 
	std::getline(std::cin, x);
	while (!x.compare("no")||!x.compare("No"))
	{
		std::cout << "Returning to beginning.\n";
		goto Start;
	}
	return username;
}

void YearFour::checkdeath(YearFour *user)
{
	if (population <= 0 || morale <= 0 || finances <= 0)
	{
		std::cout << "*************************************************************\n";
		std::cout << "\n";
		std::cout << "GAME OVER.\n";
		std::cout << "One of the key parameters fell below zero, and your society has ceased to exist.\n";
		std::cout << "Here are your finishing totals: \n";
		std::cout << "\n";
		std::cout << "Finances =       " << user->finances << "\n";
		std::cout << "Morale   =       " << user->morale << "\n";
		std::cout << "Population =     " << user->population << "\n";
		int x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
	}
}

void YearFive::checkdeath(YearFive *user)
{
	if (population <= 0 || morale <= 0 || finances <= 0)
	{
		std::cout << "*************************************************************\n";
		std::cout << "\n";
		std::cout << "GAME OVER.\n";
		std::cout << "One of the key parameters fell below zero, and your society has ceased to exist.\n";
		std::cout << "Here are your finishing totals: \n";
		std::cout << "\n";
		std::cout << "Finances =       " << user->finances << "\n";
		std::cout << "Morale   =       " << user->morale << "\n";
		std::cout << "Population =     " << user->population << "\n";
		int x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
	}
}


void YearSix::checkdeath(YearSix *user)
{
	if (population <= 0 || morale <= 0 || finances <= 0)
	{
		std::cout << "*************************************************************\n";
		std::cout << "\n";
		std::cout << "GAME OVER.\n";
		std::cout << "One of the key parameters fell below zero, and your society has ceased to exist.\n";
		std::cout << "Here are your finishing totals: \n";
		std::cout << "\n";
		std::cout << "Finances =       " << user->finances << "\n";
		std::cout << "Morale   =       " << user->morale << "\n";
		std::cout << "Population =     " << user->population << "\n";
		int x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
	}
}


void YearThree::checkdeath(YearThree *user)
{
	if (population <= 0 || morale <= 0 || finances <= 0)
	{
		std::cout << "*************************************************************\n";
		std::cout << "\n";
		std::cout << "GAME OVER.\n";
		std::cout << "One of the key parameters fell below zero, and your society has ceased to exist.\n";
		std::cout << "Here are your finishing totals: \n";
		std::cout << "\n";
		std::cout << "Finances =       " << user->finances << "\n";
		std::cout << "Morale   =       " << user->morale << "\n";
		std::cout << "Population =     " << user->population << "\n";
		int x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
		std::cin >> x;
	}
}