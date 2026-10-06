#ifndef TRIANGLETEM_H
#define TRIANGLETEM_H
class Triangletem
{
private:
	double a, b, c;
	int id;
public:
	Triangletem();
	Triangletem(double sa, double sb, double sc, int sid);
	bool isTriangle();
	int getID();
	void showInfo();
};
#endif