#include<iostream>
using namespace std;
int main()
{
  int nb;
  cout << "Enter a first integer :" ;
  cin >> nb;
  if ( nb > 0) { cout << "Tis number is positive.";}
  else if ( nb < 0) {cout << "This number is negative.";}
  else {cout << "This number is null.";}
  return 0;
}
