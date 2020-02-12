// drg-MileConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: David Garza
// Date: 20200210
// Description: To convert miles to kilometers

#include <stdafx.h>
#include <iostream>

int main()
{
   std::cout << "Hello World!\n";

   // Stage 2: Variables
   float fltMiles = 0.0;
   float fltResult = 0.0;

   // Stage 4: Input
   std::cout << "Please enter the amount of miles to convert into kilometers: ";
   std::cin >> fltMiles;

   // Stage 3: Processing
   fltResult = fltMiles * 1.609;

   // Stage 1: Output
   std::cout << "Your converted kilometers are: " << fltResult;
}
