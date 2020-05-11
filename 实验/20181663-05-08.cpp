#include <iostream>
using namespace std;
void print(int),print(char),print( const char*);
int main(void)
{

	int m(2000);
	print('m');
	print(m);
	print("good");
}
void print(char x)
{

	cout << x <<endl;
}
void print(const char *x)
{

	cout << x << endl;

}
void print(int x)
{

	cout << x << endl;
}
