#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include<stdlib.h>
void main()
{
	int n;

	printf_s("Vedite n (ot 0 do 20) : \n");
	scanf_s("%d", &n);

	//cout << "¬ведите n (от 0 до 20) : " << endl;
	//cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				printf_s("*");
			}
			else {
				printf_s(" ");
			}
		}
		printf_s("\n");
	}
}