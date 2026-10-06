#ifndef QUESTIONBANK_H
#define QUESTIONBANK_H
#include "Triangletem.h"
#include <vector>
class QuestionBank
{
private:
	std::vector<Triangletem> quesList;
public:
	QuestionBank();
	bool addQuestion(Triangletem& t);
	bool delQuestion(int id);
	void showAllQuestion();
};
#endif