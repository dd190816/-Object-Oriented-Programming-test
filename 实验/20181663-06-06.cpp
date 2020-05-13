#include <iostream>
using namespace std;
int main(void)
{
	double d = 3.98,e = 1.34; 
	double& rd = d,&re = e;
	cout << rd + re << ',' << d + re << endl; 
	rd = 2.56;
	cout << rd + re << ',' << d + re << endl; 
	e = 2.5;
	cout << 2 * re << endl;
}