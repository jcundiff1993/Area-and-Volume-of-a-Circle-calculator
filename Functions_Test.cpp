#include<iostream>
#include<cmath>

using namespace std;

const long double pi{ 3.14159 };


double calc_area_circle(double radius) {

	return pi * radius * radius;

}

double calc_volume_cylinder(double radius, double height) {
	return calc_area_circle (radius) * height;
}


void area_circle() {
	double radius{};
	cout << "Enter the radius of the circle." << endl;
	cin >> radius;
	cout << "The area of the circle with the radius of " << radius << " is " << calc_area_circle(radius) << endl;

}



void volume_cylinder() {
	double radius{};
	cout << "\nEnter the radius of the cylinder." << endl;
	cin >> radius;
	double height{};
	cout << "\nEnter the height of the cylinder." << endl;
	cin >> height;

	cout << "The volume of a cylinder with the radius of " << radius << " and the height of " << height << " is " << calc_volume_cylinder(radius, height) << "." << endl;
}

int main() {

	area_circle();
	volume_cylinder();

	return 0;
}