#include<iostream>
#include "calculator.h"

using namespace std;

int main(){
	Calculator calc;
	double a = calc.Add(10.0, 5.0);
	double b = calc.Add(a, calc.Sub(-50.0, 5.5));
	cout << b << endl;
	return 0;
}
