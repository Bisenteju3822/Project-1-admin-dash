#include <iostream>
using namespace std;

// Function to manipulate the array
void n1(int arr[], int n, int n2[])
{
  for (int i = 0; i < n; i++)
  {
    n2[i] = arr[i] + 10;
  }
  for (int i = 0; i < n; i++)
  {
    cout << n2[i] << endl;
  }
  cout << endl;
}

int main()
{
  int arr[5] = {1, 4, 3, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int n2[5]; // Declare n2 array

  // Copying elements from arr to n2
  for (int i = 0; i < n; i++)
  {
    n2[i] = arr[i];
  }

  n1(arr, n, n2); // Pass n2 to the function to be modified

  cout << "After this" << endl;

  // Correctly printing the modified n2 array
  for (int i = 0; i < n; i++)
  {
    cout << n2[i] << endl;
  }

  return 0;
}
