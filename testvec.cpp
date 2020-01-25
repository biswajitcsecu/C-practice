

// Vector basics.
#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

#define S 50

using namespace std;


int main()
{
vector<int> v; 
vector <double> w;
unsigned int i;

cout << "Size = " << v.size() << endl;


for(i=0; i<S; i++) v.push_back(i);
	cout << "Current contents:\n";
cout << "Size now = " << v.size() << endl;

for(i=0; i<S; i++) w.push_back(i);

// display contents of vector
for(i=0; i<v.size(); i++) cout << v[i] << " ";
	cout << endl;



for(i=0; i<S; i++) v.push_back(i+S);
	cout << "Size now = " << v.size() << endl;
	// display contents of vector
cout << "Current contents:\n";

for(i=0; i<v.size(); i++) cout << v[i] << " ";
	cout << endl;

	// change contents of vector

for(i=0; i<v.size(); i++) w[i] = sin(v[i]) + cos(v[i]);
// display contents of vector
	cout << "Contents doubled:\n";

ofstream data ("tab.dat");

if(!data) {
	cout << "Cannot open file.\n";
	return 1;
}


for(i=0; i<v.size(); i++) 
{
	data<<w[i]<< " "<<'\n';
	cout << w[i] << " ";
	cout << endl;
}

data.close();
return 0;

}