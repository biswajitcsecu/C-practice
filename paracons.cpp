
#include <iostream>
using namespace std;

// This creates the class queue.
class queue {
int q[100];
int sloc, rloc;
int who; // holds the queue's ID number

public:
queue(int id); // parameterized constructor
~queue(); // destructor
void qput(int i);
int qget();
};

// This is the constructor.
queue::queue(int id)
{
sloc = rloc = 0;
who = id;
cout << "Queue " << who << " initialized.\n";
}

// This is the destructor.
queue::~queue()
{
cout << "Queue " << who << " destroyed.\n";
}
// Put an integer into the queue.
void queue::qput(int i)
{
if(sloc==100) {
cout << "Queue is full.\n";
return;
}
sloc++;
q[sloc] = i;
}
// Get an integer from the queue.
int queue::qget()
{
if(rloc == sloc) {
cout << "Queue underflow.\n";
return 0;
}
rloc++;
return q[rloc];
}


int main()
{
	// create two queue objects
queue a(1), b(2);
a.qput(10);
b.qput(19);
a.qput(20);
b.qput(1);

cout<<a.qget()<<" ";
cout<<a.qget()<<" ";
cout<<b.qget()<<" ";
cout<<b.qget()<<"\n";

return 0;
}