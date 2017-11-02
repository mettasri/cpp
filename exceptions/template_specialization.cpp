#include <iostream>
using namespace std;

template <class T>
inline T square(T x)
{
  T result;
  result = x * x;
  return result;
};

template <>
string square<string>(string ss)
{
  return (ss+ss);
};

int main()     
{
  int i = 4, ii;
  string ww("A");
  ii = square<int>(i);
  cout << i << ii << endl;
  cout << square<string>(ww) << endl;
}
