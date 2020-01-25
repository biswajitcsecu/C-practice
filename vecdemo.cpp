

	#include <iostream>
	#include <vector>

	using namespace std;

	int main()
	{
	vector<char> v; // create zero-length vector
	int i;
	// put values into a vector
	for(i=0; i<10; i++) v.push_back('A' + i);
	// can access vector contents using subscripting
		for(i=0; i<10; i++) cout << v[i] << " ";
			cout << endl;

	// access via iterator
		vector<char>::iterator p = v.begin();
		while(p != v.end()) {
			cout << *p << " ";
			p++;
		}
		cout << endl;
		return 0;
	}