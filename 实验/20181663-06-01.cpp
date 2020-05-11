#include <iostream>
using namespace std;
int main(void)
{
	static int x[] = { 5,4,3,2,1 };
int* p = &x[1];
int a = 10,b;
for (int i = 3; i >= 0; i--)
b = (*(p + i) < a) ? *(p + i) : a;
cout << b << endl;
}
