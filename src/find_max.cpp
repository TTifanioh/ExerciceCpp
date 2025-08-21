#include<iostream>
using namespace std;
int main ()
{
  int nb1,nb2;
  cout << "Enter a first integer :" ;
  cin >> nb1;
   cout << "Enter a second integer :" ;
  cin >> nb2;
  if (nb1 < nb2 ) { cout << "nb2 is larger than nb1.";}
  else if (nb1> nb2) {cout << "nb1 is larger than nb2.";}
  else {cout << "nb1 equal nb2.";}
  return 0;
}
