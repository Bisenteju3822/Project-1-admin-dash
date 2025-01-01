#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int arr[5] = {1, 2, 4, 6, 7};

  for (int i = 0; i < n; i++)
  {
    bool isPrime = true;
    if (arr[i] <= 1)
    {
      isPrime = false;
    }
    else
    {
      for (int j = 2; j * j <= arr[i]; j++)
      {
        if (arr[i] % j == 0)
        {
          isPrime = false;
          break;
        }
      }
    }

    if (isPrime)
    {
      cout << arr[i] << " is prime" << endl;
    }
    else
    {
      cout << arr[i] << " is not prime" << endl;
    }
  }

  return 0;
}
