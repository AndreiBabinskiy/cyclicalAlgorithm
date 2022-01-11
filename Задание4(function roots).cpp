#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <process.h>

double function(double x) {
	double value;
	value = 4 * x - 7 * sin(x);
	return value;
}

void Iteration(double a, double b, double* e, double h) {

	double c;

	for (a; a < b; a = a + h) {
		c = a + h;

		if (function(a) * function(c) < 0)
		{

			double a1 = a;
			double b1 = c;
			int k = 1;

			printf("\n Section [%lf %lf]", a, c);
			for (a1; a1 < b1; a1 = a1 + *e) {

				if (function(a1) * function(a1 + *e) <= 0) {
					printf("\n x = %lf  y= %lf.  Number of iteration: [%d] ", a1, function(a1), k);
					printf("\n------------------------------------------------------------------------");
					break;
				}
				k++;
			}

		}
	}
}

void segmentDivisionInHalf(double a, double b, double& e1, double h) {

	double c;

	for (a; a < b; a = a + h) {
		c = a + h;

		if (function(a) * function(c) < 0)
		{

			double a1 = a;
			double b1 = c;
			int k = 1;
			while (fabs(function(a1)) > e1) {
				double c1 = (a1 + b1) / 2;
				if (function(a1) * function(c1) < 0)
				{
					b1 = c1;
				}
				else
				{
					a1 = c1;
				}
				k++;

			}
			printf("\n Section [%lf %lf]", a, c);
			printf("\n x= %lf  y= %lf.  Number of iteration: [%d] ", a1, function(a1), k);
			printf("\n--------------------------------------------------------------------------");

		}

	}
}

void main() {
	setlocale(LC_ALL, "Rus");
	double a = -2;
	double b = 2;
	double e = 0.001;
	double h = (b - a) / 20.;

	printf("************ Iteration method ******************\n");
	Iteration(a, b, &e, h);

	printf("\n\n********* Intersection method ***********\n");
	segmentDivisionInHalf(a, b, e, h);
}
