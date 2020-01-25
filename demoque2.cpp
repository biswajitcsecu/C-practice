
// Demonstrate class member access.
#include <iostream>
using namespace std;


class myclass {
int a; // private data
public:
int b; // public data
void setab(int i); // public functions
int geta();
void reset();
};
void myclass::setab(int i)
{
a = i; // refer directly to a
b = i*i; // refer directly to b
}
int myclass::geta()
{
return a; // refer directly to a
}

void myclass::reset()
{
// call setab() directly
setab(0); // the object is already known
}


int main()
{
myclass ob;
ob.setab(5); // set ob.a and ob.b
cout << "ob after setab(5): ";
cout << ob.geta() << ' ';
cout << ob.b; // can access b because it is public
cout << '\n';

ob.b= 20; // can access b because it is public


cout<< "ob after ob.b=20: ";
cout<< ob.geta() << ' ';
cout<< ob.b;
cout<< '\n';
ob.reset();
cout << "ob after ob.reset(): ";
cout << ob.geta() << ' ';
cout << ob.b;
cout << '\n';
return 0;
}