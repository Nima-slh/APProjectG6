#pragma once
#include "mainHeader.h"
class Lesson
{
public:
	Lesson();
	Lesson(int v, string n, string t, int np, Lesson* p, int nh, Lesson* h);
	~Lesson();
	void setVahed(int v);
private:
	int vahed;
	string name;
	string type;
	Lesson* pishniaz;
	Lesson* hamniaz;
};

