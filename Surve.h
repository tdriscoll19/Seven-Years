
#ifndef Surve
#define Surve
#include "stdafx.h"
class YearOne
{
private:
	std::string username;
	int finances;
	int morale;
	int population;
	bool gather;
	bool invest;
public:
	YearOne(std::string w, int x, int y, int z) { finances = x; morale = y; population = z; }
	std::string getUser(YearOne *user);
	int getFinances(YearOne *user);
	int getMorale(YearOne *user);
	int getPop(YearOne *user);
	bool getBool(YearOne *user);
	void adjustValues(YearOne *user);
	void giveSummary(YearOne *user);
	void welcome();
	void challengeOne(YearOne *user);
	void challengeTwo(YearOne *user);
	void waterDisease();
	int disease();
	void endYear(YearOne *user);
};
class YearTwo
{
private:
	std::string username;
	int finances;
	int morale;
	int population;
	bool aggro = false;
	bool superAggro = false;
	std::vector<std::string> optos;
	bool coupThreat;
	bool haveKids1;
	int educationLevel = 0;
	//1 = minimal, 2 = moderate, 3 = high, 0 = none
	bool invest;
	bool invested;
	int year = 2;
	
public:
		YearTwo(std::string w, int x, int y, int z, bool l) { finances = x; morale = y; population = z; invested = !l; }
	void challengeOne(YearTwo *user);
	
		void giveSummary(YearTwo *user);
		int setVal(std::string x);
		void popGlasses(int n);
		void popMad(int n);
		std::string getName();
		void makeArray();
		void outputArray();
	
	void challengeTwo(YearTwo *user);
	void challengeThree(YearTwo *user);
	void reccurrentIssues(YearTwo *user);
	int disease();
	int schoolFunding();
	void summaryTwo(YearTwo *user);
	void giveSummarye(YearTwo *user);
	std::string getUser(YearTwo *user);
	int getFinances(YearTwo *user);
	int getMorale(YearTwo *user);
	int getPop(YearTwo *user);
	int getEdu(YearTwo *user);
	bool coupthreat(YearTwo *user);
	bool Invested(YearTwo *user);
	bool havekids(YearTwo *user);
	int getSize(YearTwo *user);
	std::string getName2(YearTwo *user);
};

class YearThree
{
private:
	std::string username;
	int finances;
	int morale;
	int population;
	int educationLevel;
	bool coupThreat;
	bool invest;
	bool kids;
	std::vector<std::string> optos3;
	std::vector<std::string> realdocs;
	int year = 3;
	bool doctors  = true;
	bool rdoctors;
	bool diseased = true;
public:
	YearThree(std::string w, int x, int y, int z, int e, bool l, bool r, bool g) 
	{
		finances = x; morale = y; population = z; educationLevel = e; coupThreat = l; invest = r; kids = g;
	}
	void giveSummary(YearThree *user);
	void getArray(YearTwo *user, YearThree *user1);
	void challengeOne(YearThree *user);
	void challengeTwo(YearThree *user);
	void challengeThree(YearThree *user);
	void makeArray(YearThree *user);
	std::string getNameDoc();
	void recurringIssues(YearThree *user);
	int disease();
	void giveSummarye(YearThree *user);
	int getFinances(YearThree *user);
	int getMorale(YearThree *user);
	int getPop(YearThree *user);
	bool Invested(YearThree *user);
	std::string getUser(YearThree *user);
	bool doctor(YearThree *user);
	bool haveKids(YearThree *user);
	int getSize(YearThree *user);
	std::string getName2(YearThree *user);
	bool water(YearThree *user);
	bool haveDocs(YearThree *user);
	int getSize1(YearThree *user);
	std::string getName3(YearThree *user);
	void checkdeath(YearThree *user);
};

class YearFour
{
private:
	std::string username;
	int finances;
	int morale;
	int population;
	bool invest;
	bool kids;
	bool doctors;
	std::vector<std::string> optos4;
	int year = 4;
	bool against;
	bool disease = false;
	
public:
	YearFour(std::string z, int y, int x, int w, bool v, bool t, bool s, bool r)
	{
		username = z; finances = y, morale = x; population = w; invest = v; kids = t; doctors = s; disease = r;
	}
	void giveSummary(YearFour *user);
	void challengeOne(YearThree *user1, YearFour *user);
	void getArray(YearThree *user, YearFour *user1);
	void rebellion(int situation);
	void recurringIssues(YearFour *user);
	int testIllness();
	void giveSummarye(YearFour *user);
	void checkdeath(YearFour *user);
	int getFinances(YearFour *user);
	int getMorale(YearFour *user);
	int getPop(YearFour *user);
	bool Invested(YearFour *user);
	std::string getUser(YearFour *user);
	bool haveKids(YearFour *user);

};

class YearFive
{
private:
	int finances;
	int morale;
	int population;
	int invest;
	std::string username;
	bool haveKids;
	std::vector<std::string> financials;
	bool advisors = false;
	bool haveDocs;
	int year = 5;
	bool strikeGold;
public:
	YearFive(std::string z, int y, int x, int w, bool v, bool t, bool s)
	{
		username = z; finances = y, morale = x; population = w; 
		invest = v; haveKids = t; haveDocs = s;
	}
	void giveSummary(YearFive *user);
	void challengeOne(YearFive *user);
	void challengeTwo(YearFive *user);
	void challengeThree(YearFive *user);
	void setnames(int max);
	void regulation(YearFive *user);
	void recurrentIssues(YearFive *user);
	void giveSummarye(YearFive *user);
	void checkdeath(YearFive *user);
	int getFinances(YearFive *user);
	int getMorale(YearFive *user);
	int getPop(YearFive *user);
	std::string getUser(YearFive *user);
	bool haveKids1(YearFive *user);
	bool haveDocs1(YearFive *user);
	bool haveAds(YearFive *user);
};

class YearSix
{
private:
	int finances;
	int morale;
	int population;
	std::string username;
	bool haveKids;
	bool haveDocs;
	bool haveAds;
	std::vector<std::string> Docs;
	std::vector<std::string> Ads;
	std::string apot;
	int year = 6;
	
public:
	YearSix(std::string z, int y, int x, int w, bool v, bool t, bool s)
	{
		username = z; finances = y, morale = x; population = w;
		haveAds = v; haveKids = t; haveDocs = s;
	}
	void intro();
	void challengeOne(YearThree *user, YearSix *user1);
	void getArray(YearThree *user, YearSix *user1);
	void printArray(YearSix *user);
	bool testArray(YearSix *user, std::string x);
	void giveSummarye(YearSix *user);
	void checkdeath(YearSix *user);
	int getFinances(YearSix *user);
	int getMorale(YearSix *user);
	int getPop(YearSix *user);
	std::string getUser(YearSix *user);
};
class YearSeven
{
private:
	int finances;
	int morale;
	int population;
	std::string username;
public:
	YearSeven(int x, int y, int z, std::string name) { finances = x; morale = y; population = z; username = name; }
	void Evaluation(YearSeven *user);
};
void Opener();
std::string InputName();
#endif