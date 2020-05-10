#include <iostream>
using namespace std;
void f(int n)
{

	int x(5);
	static int y;
	if (n > 0)
	{

		x++;
		y++;
		cout << x << ',' << y << endl;
	}
}
int main(void)
{
	int a(8);
	f(a);
}