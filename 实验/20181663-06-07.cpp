#include <iostream>
using namespace std;
int main(void)
{
	void fun(int,int&);
	int a,b; fun(5,a); fun(8,b);
	cout << "a+b=" << a + b << endl;
}

void fun(int i,int &j)
{
	j = i * 3;
}