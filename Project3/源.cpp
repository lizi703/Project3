#include <iostream>
#include "QuestionBank.h"
using namespace std;

int main()
{
	QuestionBank bank;
	Triangletem t1(3, 4, 5, 1001);
	Triangletem t2(5, 5, 6, 1002);

	bank.addQuestion(t1);
	bank.addQuestion(t2);

	cout << "=== After add questions ===" << endl;
	bank.showAllQuestion();

	bank.delQuestion(1001);
	cout << "\n=== After delete id=1001 ===" << endl;
	bank.showAllQuestion();

	return 0;
}