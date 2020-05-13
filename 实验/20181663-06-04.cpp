#include <iostream>
using namespace std;
int a[][3] = { 1,2,3,4,5,6,7,8,9 };
int* p[] = { a[0],a[1],a[2] };
int** pp = p;
int main(void)
{
	int(*s)[3] = a, * q = &a[0][0];
	for (int i(1); i < 3; i++)
		for (int j(0); j < 2; j++)
		{
			cout << *(a[i] + j) << ',' << *(*(p + i) + j) << ',' << (*(pp + i))[j] << ',';
			cout << *(q + 3 * i + j) << ',' << *(*s + 3 * i + j) << endl;
		};

	
}