#include<iostream>
using namespace std;
int main()
{
  int nb,i,sum=0;
  cout << "Enter a integer :";
  cin >> nb ;
  for (i=0; i <= nb ; i++)
    {
      sum = sum + i;
    }
  cout << "The sum of the natural integers ranging from 0 to " << nb << " is " << sum << endl;
  return 0;
}
