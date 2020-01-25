
#include <iostream>
using namespace std;

class myclass {
int val;
public:
myclass(int i) { val = i; cout << "Constructing\n"; }
~myclass() { cout << "Destructing\n"; }
int getval() { return val; }
};

void display(myclass ob)
{
cout << ob.getval() << '\n';
}


int main()
{
myclass a(10);
display(a);
return 0;
}