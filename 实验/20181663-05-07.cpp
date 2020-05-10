#include <iostream>
using namespace std;
void swap(int&, int&);
int main(void)
{
	int a(5), b(10);
	swap(a, b);
	cout << "a=" << a << ",b=" << b << endl;
}
void swap(int& x, int& y)
{

	int temp;
	temp = x;
	x = y;
	y = temp;
}