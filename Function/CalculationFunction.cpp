#include <bits/stdc++.h>
using namespace std;
int Sum(int x, int y)
{
  int sum = x + y;
  return sum;
}
int Sub(int x, int y)
{
  int sub = x - y;
  return sub;
}
int main()
{
  int a, b;
  cout << "Enter two value for compute: ";
  cin >> a >> b;
  int Sumresult = Sum(a, b);
  int Subresult = Sub(a, b);
  cout << "The sum: " << Sumresult << endl;
  cout << "The sub : " << Subresult << endl;
  return 0;
}
