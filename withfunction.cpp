#include<iostream>
using namespace std;
double average(double n1[], int size) 
{
  double sum = 0; 
  for (int i = 0; i < size; ++i)
  {
    sum += n1[i];
  }
  return sum/size;
}

// main function
int main()
{
  int size; // to store size
  double avg; // to store result value

  cout << "Enter size of array: ";
  cin >> size ;
  double arr[size]; // to store numbers

  // take array input
  cout << "Enter array elements: ";
  for (int i = 0; i < size; ++i)
  {
    cin >> arr[i];
  }
  
  // function to find avg of N numbers
  avg = average(arr, size);
  
  // display result
  cout << "Average = " << avg << endl;

  return 0;
}
