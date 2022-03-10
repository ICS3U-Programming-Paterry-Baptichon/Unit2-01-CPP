// Created by: Paterry
// Created on: March, 03-09
// This program calculates and displays the area
// perimeter of a circle with radius 30 mm.
#include <iostream>
#include <cmath>


int main() {
  std::cout << "For a circle that has a radius\n";
  std::cout << "of 30mm:\n";
  std::cout << "\n";
  std::cout << "Area = " << M_PI * pow(30,4)  << " cm^2\n";
  std::cout << "Perimeter = " << 4*M_PI*30 << " cm\n";
  
}