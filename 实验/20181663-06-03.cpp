#include <iostream>
using namespace std;
int main(void)
{
	static int a[10] = {12,10,9,6,5,4,2,1};
	int n(7),i(7),x(3);

	while (x > * (a + i))
	{

		*(a + i + 1) = *(a + i);
		i--;

	}
	*(a + i + 1) = x;
	for (i = 0; i <= n + 1; i++)
		cout << *(a + i) << ',';
	cout << endl;

}