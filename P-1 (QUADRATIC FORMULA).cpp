#include<iostream>
#include<cmath>
using namespace std;
int main() {
	
	int a, b, c;
	float x1, x2;
	
	cout << "Enter the values of a, b, c respecticly:" << endl;
	cin >> a >> b >> c;
	
	int radical_expression = (pow(b, 2) - 4 * a * c);
	float denominator_P = (- b) + pow(radical_expression, 0.5);
	float denominator_M = (- b) - pow(radical_expression, 0.5);
	int nenominator = 2 * a;
	
	x1 = denominator_P / nenominator;
	x2 = denominator_M / nenominator;
		
		
		cout << "The values of x are \nx1 = " << x1 << " \nx2 = " << x2 << endl;
	return 0;
}
