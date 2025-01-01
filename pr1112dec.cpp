
#include <iostream>
using namespace std;
int main()
{
  int a = 10;
  int &b = a;
  b = 90;
  a = 900;
  cout << a << endl;
  cout << &b << endl;

  return 0;
}
