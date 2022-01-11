#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <math.h>
#include<stdlib.h>
#include<process.h>
#include<locale.h>

void main() {

	double a;
	double b;
	double h;
	int n;
	double S;
	double Y;
	double delta;

	printf_s("Enter a : \n");
	scanf_s("%lf", &a);
	printf_s("Enter b : \n");
	scanf_s("%lf", &b);
	printf_s("Enter h : \n");
	scanf_s("%lf", &h);
	printf_s("Enter n : \n");
	scanf_s("%d", &n);
	printf_s("x    S(x)      Y(x)      |Y(x)-S(x)| \n");
	printf_s("-------------------------------- \n");
	for (double x = a; x <= b; x = x + h) {
		Y = sin(x);
		S = 0;
		for (int k = 0; k <= n; k++) {
			double factorial = 1;
			for (int i = 1; i <= 2 * k + 1; i++) {
				factorial *= i; // factorial = factorial * i;
			}
			S += pow(-1., k) * pow(x, (k * 2 + 1)) / factorial;
		}
		delta = fabs(Y - S);
		printf_s("%.2lf | %.5lf| %.5lf| %.5lf            | \n", x, Y, S, delta);
	}
	system("pause");
}