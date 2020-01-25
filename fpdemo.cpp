


#include <iostream>

using namespace std;


void cube(int *n, int num);


int main()
{
	int i, nums[1000];
	for(i=0; i<1000; i++) nums[i] = i+1;
		cout << "Original contents: ";

	for(i=0; i<1000; i++) cout << nums[i] << ' ';
		cout << '\n';
		cube(nums, 1000); 
		// compute cubes
	cout << "Altered contents: ";
	for(i=0; i<1000; i++) cout << nums[i] << ' ';
		return 0;
}

void cube(int *n, int num)
{
	while(num) {
		*n = *n * *n * *n;
		num--;
		n++;
	}
}