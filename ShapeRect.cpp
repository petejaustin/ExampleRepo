/*
This is an example of inheritance in C++.

As you already understand the concepts of inheritance, there is no real point
writing out a full tutorial. Here, we are more concerned with the C++ syntax.

Rather than being called Parent and Child classes, in C++ they are referred to
as BASE and DERIVED respectively. If you see these words, they mean the exact
same thing.
*/

#include<iostream>

using namespace std;

// Base/parent class

class Shape {

	public:
	
		void setWidth(int w) {
		
			width = w;
		}
		
		void setHeight(int h) {
			
			height = h;
		}
	
	//protected means only this class and derived classes can use it
	
	protected:
	
		int width;
		int height;
	
};

// Child/Derived class. PAY ATTENTION TO HOW WE IMPLEMENT IT

class Rectangle: public Shape {

	public:
	
		int getArea() {
		
			return (width * height);
		}
};

//driver function

int main() {

	// make an object of our rectangle derived class
	
	Rectangle rect;
	
	// set values using base class functions
	rect.setWidth(7);
	rect.setHeight(3);

	// use derived class function to return the area
	
	cout << "The area of our rectangle is: " << rect.getArea() << "\n";
	
	return 0;
}
