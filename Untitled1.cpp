#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int area, perimeter, s;

	//This block must go after all definitions and cin but before the cout for area.
	perimeter=A+B+C; //I dropped the quotes here
	s= perimeter/2;
	area= sqrt(s*(s-A)*(s-B)*(s-C)); // I dropped the quotes here

	//Move this block to the start of main.  The variables must be defined before they are set or used.
	double s;
	double A, B, C; //I dropped the quotes here
	double area;

	//Move this section to a spot in the function after you've declared A,B,C but before you calculate perimeter, s and area.
	cout << "This program calculates the area of a triangle";
	cout << "What is the length of side A, B, and C, respectively?";
	cin >> A >> B >> C; // Use the >> operator to get several values in a row.

	//This part is correct.
	cout << "The area of the triangle is " << area << ".\n";
	return 0;
}
