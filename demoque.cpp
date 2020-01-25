
#include <iostream>
using namespace std;


// This creates the class queue.
class queue {
	int q[100];
	int sloc, rloc;
	public:
		void init();
		void qput(int i);
		int qget();
	};

// Initialize the queue.
	void queue::init()
	{
		this->rloc = this->sloc = 0;
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
	queue a, b;
	// create two queue objects
	a.init();
	b.init();
	a.qput(10);
	b.qput(19);
	a.qput(20);
	b.qput(1);
	//array in a 
	queue* x = new queue[50];
	x->init();
	cout << "Contents of queue a: ";
	for (int i=0; i<50; i++){
		x->qput(i);
	}

	cout << "Contents of queue a: ";
		for (int i=0; i<50; i++){
		cout <<x->qget() << " "<< "\n";
	}

	cout << "Contents of queue a: ";
	cout << a.qget() << " ";
	cout << a.qget() << "\n";
	cout << "Contents of queue b: ";
	cout << b.qget() << " ";
	cout << b.qget() << "\n";
	delete[] x;

	return 0;
}