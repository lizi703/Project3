#include "Triangletem.h"
#include <iostream>
using namespace std;

Triangletem::Triangletem()
{
	a = 0;
	b = 0;
	c = 0;
	id = 0;
}

Triangletem::Triangletem(double sa, double sb, double sc, int sid)
{
	a = sa;
	b = sb;
	c = sc;
	id = sid;
}

bool Triangletem::isTriangle()
{
	if ((a + b > c) && (a + c > b) && (b + c > a)&&a>0&&b>0&&c>0 )
		return true;
	else
		return false;
}

int Triangletem::getID()
{
	return id;
}

void Triangletem::showInfo()
{
	cout << "ID:" << id << ", side a=" << a << ", b=" << b << ", c=" << c;
	if (isTriangle())
		cout << "  Valid triangle" << endl;
	else
		cout << "  Invalid triangle" << endl;
}