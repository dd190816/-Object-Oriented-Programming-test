#include <iostream>
using namespace std;
int fun(const char*, const char*);
int main(void)
{
	int n;
	const char* pl,*p2; 
	pl = "abcxyr"; p2 = "abcijh"; 
	n=fun(pl,p2); 
	cout<<n<<endl;
}
int fun(const char* s1,const char* s2)
{
	while (*s1 && *s2 && *s2++ == *s1++);


		return *s1 - *s2;
}