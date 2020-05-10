#include <iostream>
using namespace std;
int add(int a, int b=5);
int main(void)
{
	int m(5);
	cout << "sum1 = " << add(m) << endl;
	cout << "sum2 = " << add(m, add(m)) << endl;
	cout << "sum3 = " << add(m, add(m, add(m))) << endl;
}
	int add(int x,int y)
	{

		return x + y;
}