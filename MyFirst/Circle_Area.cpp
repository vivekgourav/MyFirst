#include<iostream>
#include<cmath>
using namespace std;


float area(int rad)
{
	float areaC;
	cout << "Enter the Radius of the Circle: ";
	cin >> rad;
	areaC = 3.14 * rad * rad;
	cout << "Area of the circle is : " << areaC;

	return 0;

}