	#include <iostream>


	using namespace std;
	
	int main ( )
	{
	// Declarations
		const int CAPACITY = 10;
		int numbers [CAPACITY];
		int size;
	// Getting the size from user and validate it
		do
		{
			cout << "Enter the size (1 and 10) ";
			cin >> size;
		} while (size < 1 || size > CAPACITY);
	// Inputting Integers
		cout << "Enter " << size << " integer(s): " ;
		for (int i = 0 ; i < size ; i++)
		{
			cin >> numbers [i] ;		
		}
	// Outputting Integers in
		cout << "Integer(s) in reversed order: ";
		for (int i = size − 1 ; i >= 0 ; i− −)
		{
			cout << numbers[i] << " " ;		
		}
		return 0;
	}