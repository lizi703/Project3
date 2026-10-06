#include "QuestionBank.h"
#include <iostream>
using namespace std;

QuestionBank::QuestionBank()
{
}

bool QuestionBank::addQuestion(Triangletem& t)
{
	quesList.push_back(t);
	return true;
}

bool QuestionBank::delQuestion(int id)
{
	for (auto it = quesList.begin(); it != quesList.end(); it++)
	{
		if (it->getID() == id)
		{
			quesList.erase(it);
			return true;
		}
	}
	return false;
}

void QuestionBank::showAllQuestion()
{
	cout << "All questions in bank: " << endl;
	for (auto& item : quesList)
	{
		item.showInfo();
	}
}