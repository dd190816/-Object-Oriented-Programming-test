#include <iostream>
using namespace std;
void fun(int, int, int*);
int main(void)
{
	int a, b, c;
	fun(7, 8, &a);
	fun(9, a, &b);
	fun(a, b, &c);
	cout << a << ',' << b << ',' << c << endl;
}
void fun(int i, int j, int* k)
{
	j += i;
	*k = j - i;

}