#include <iostream>
using namespace std;
int fac(int);
int main(void)
{
	int s(0);
	for (int i(1); i <= 5; i++)
		s += fac(i);
	cout << "5!+4!+3!+2!+1!=" << s << endl;
}

int fac(int a)
{

	static int b = 1;
	b *= a;
	return b;
}
