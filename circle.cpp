
#include <iostream>

using namespace std;



class Circle
{
private:
	double radius;
public:
	double getRadius () const;
	double getArea () const;
	double getPerimeter () const;
	void setRadius (double value);
};


// Definition of getRadius member function
double Circle :: getRadius () const
{
	return radius;
}


// Definition of getArea member function
double Circle :: getArea () const
{
	const double PI = 3.14;
	return (PI * radius * radius);
}

// Definition of getPerimeter member function
double Circle :: getPerimeter () const
{
	const double PI = 3.14;
	return (2 * PI * radius);
}

// Definition of setRadius member function
void Circle :: setRadius (double value)
{
	radius = value;
}


int main (int argc, char** argv)
{

// Creating first circle and applying member functions
	cout << "Circle 1: " << endl;
	Circle circle1;
	circle1.setRadius (30.0);
	cout << "Radius: " << circle1.getRadius() << endl;
	cout << "Area: " << circle1.getArea() << endl;
	cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;

// Creating second circle and applying member functions
	cout << "Circle 2: " << endl;
	Circle circle2;
	circle2.setRadius (50.0);
	cout << "Radius: " << circle2.getRadius() << endl;
	cout << "Area: " << circle2.getArea() << endl;
	cout << "Perimeter: " << circle2.getPerimeter()<< endl<< endl;

	// Creating third circle and applying member functions
	cout << "Circle 3: " << endl;
	Circle circle3;
	circle3.setRadius (70.0);
	cout << "Radius: " << circle3.getRadius() << endl;
	cout << "Area: " << circle3.getArea() << endl;
	cout << "Perimeter: " << circle3.getPerimeter()<< endl;
	return 0;
}