#include "Lesson.h"



Lesson::Lesson()
{
	
}

Lesson::Lesson(int v, string n, string t, int np, Lesson* p, int nh, Lesson* h) 
:vahed(v), name(n), type(t) {
	if (np > 0) {
		pishniaz = new Lesson[np];
	}
	else pishniaz = nullptr;
	for (int i = 0; i < np; i++) {
		pishniaz[i] = p[i];
	}
	if (nh > 0) hamniaz = new Lesson[nh];
	else hamniaz = nullptr;
	for (int i = 0; i < nh; i++) {
		hamniaz[i] = h[i];
	}
}

Lesson::~Lesson()
{
	delete[] pishniaz;
	pishniaz = nullptr;
	delete[] hamniaz;
	hamniaz = nullptr;
}

void Lesson::setVahed(int v) {
	vahed = v;
}
