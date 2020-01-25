
// Demonstrate object assignment.
#include <iostream>
using namespace std;
class myclass {
int a, b;
public:
void setab(int i, int j) { a = i, b = j; }
void showab();
};

void myclass::showab()
{
cout << "a is " << a << '\n';
cout << "b is " << b << '\n';
}


int main()
{
myclass ob1, ob2;
ob1.setab(10, 20);
ob2.setab(0, 0);
cout << "ob1 before assignment: \n";
ob1.showab();
cout << "ob2 before assignment: \n";
ob2.showab();
cout << '\n';
ob2 = ob1; // assign ob1 to ob2
cout << "ob1 after assignment: \n";
ob1.showab();
cout << "ob2 after assignment: \n";
ob2.showab();
return 0;
}