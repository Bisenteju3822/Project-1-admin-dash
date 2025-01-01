#include <iostream>
using namespace std;
int main()
{
  // int n=sizeof(arr)/sizeof(arr[0]);
  int n = 5;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
      for (int k = 0; k < j; k++)
      {
        cout << "*";
      }
    }

    cout << endl;
  }

  return 0;
}
