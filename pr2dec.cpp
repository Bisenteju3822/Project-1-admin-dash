#include <iostream>
using namespace std;
int n1(int arr[], int l)
{
  for (int i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }
  for (int j = 0; j < 5; j++)
  {
    cout << arr[j] << endl;
  }
}
int main()
{
  int arr[5];
  int l = sizeof(arr) / sizeof(arr[0]);
  n1(arr, l);
  cout << arr[5];

  return 0;
}