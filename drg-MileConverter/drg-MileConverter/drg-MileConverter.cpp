// drg-MileConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: David Garza
// Date: 20200210
// Description: To convert miles to kilometers

#include <iostream>

int main()
{
   std::cout << "Hello World!\n";

   // Stage 2: Variables
   float miles{};
   float result;

   // Stage 4: Input
   std::cout << "Please enter the amount of miles to convert into kilometers: ";
   std::cin >> miles;

   // Stage 3: Processing
   result = miles * 1.609;

   // Stage 1: Output
   std::cout << "Your converted kilometers are: " << result;
}