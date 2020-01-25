
// Use a function-like macro.
#include <iostream>

using namespace std;

#define MIN(a,b) (((a)<(b)) ? a : b)


int main()
{
	int x, y;
	x = 10;
	y = 20;
	cout << "The minimum is " << MIN(x, y)<<"\n";
	return 0;
}