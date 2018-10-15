// VectorDriver.cpp
// Thomas Wise
// Lab04
// 15 Oct 2018

#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  // [L4.P1]
  cout << endl << endl;
  vector<short> testAddNumbers;
  print(testAddNumbers);		// Show that vector is empty before function is called.
  cout << endl;
  srand(time(NULL));			// Keeps random numbers from being the same every time program runs.
  add_numbers(testAddNumbers);	
  add_numbers(testAddNumbers);	// It said to test it with the same argument twice. Nothing special really happened.
								// If I put the srand(time(NULL)) in the function, it generates the same 10 numbers twice though.
  print(testAddNumbers);
  cout << endl;

  // [L4.P2] I'm just testing it on the same vector as add_numbers.
  print_even(testAddNumbers);
  cout << endl;

  // [L4.P3] Testing it on the same vector again.
  short value = 5;
  cout << value << " is ";
  if (!is_present(testAddNumbers, value))
  {
	  cout << "not ";
  }
  cout << "in testAddNumbers" << endl;
  cout << endl;


  // [L4.P4]
  // Create the vector
  vector<short> testSort(5);
  testSort.at(0) = 3;
  testSort.at(1) = 2;
  testSort.at(2) = 5;
  testSort.at(3) = 1;
  testSort.at(4) = 4;

  // Print the vector before sorting
  cout << "testSort before sorted:" << endl;
  print(testSort);
  cout << endl << endl;

  // Sort the vector
  sort(testSort.begin(), testSort.end());
  
  // Print vector after sorting
  cout << "testSort after sorted:" << endl;
  print(testSort);
  cout << endl << endl;


  system("pause");
  return 0;
}
