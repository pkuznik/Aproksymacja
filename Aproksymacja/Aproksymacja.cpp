// Aproksymacja.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>

double* dyskretyzacja(int w, double a, double b) {
	double* tab = new double[w];
	double c = (abs(a) + abs(b)) / 50.0;
	int i = 0;

	for (a; a <= b; a += c) {
		tab[i++] = sin(a);
	}
	return tab;
}


double aproxKwadrat() {
	return 1.0;
}

double aprox(int n, int m, double x, double y[]) {
	return aproxKwadrat();
}

int main()
{
	return 0;
}
