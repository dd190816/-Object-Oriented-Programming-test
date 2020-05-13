#include <iostream>
using namespace std;
int main(void)
{
	double g1(double, double), g2(double, double);
	double sum(double(*g1)(double,double),double (*g2)(double,double));
	cout << "sum=" << sum(g1,g2) << endl;
}
double sum(double(*g1)(double,double),double(*g2)(double,double))
{

	double a = 4.8;
	double b = 5.7;
	double c = (*g1)(a,b) + (*g2)(a,b);
	return c;
}

double g1(double  x,double y)
{

	return   x + y;
}

	double g2(double  x,double y)
	{
		return x * y;
	}

