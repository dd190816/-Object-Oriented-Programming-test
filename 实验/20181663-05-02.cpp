#include <iostream>
using namespace std;
int sum(int, int);
int main(void)
{
    extern int x, y;
	cout << sum(x, y) << endl;
}
	
int x(10),y(5);
	int sum(int i,int j)
{

		return i + j;
}