#include<iostream>
using namespace std;
int main()
{
  int day;
  cout << " Day in week." << endl;
  cout << "Enter un number between 1 and 7 :" ;
  cin >> day;
  switch(day)
{
  case 1:
    cout << "This is monday." ;
    break;
   case 2:
    cout << "This is tuesday." ;
    break;
   case 3:
    cout << "This is wednesday." ;
    break;
   case 4:
    cout << "This is thursday." ;
    break;
   case 5:
    cout << "This is friday." ;
   case 6:
    cout << "This is saturday." ;
   case 7:
    cout << "This is sunday." ;
}
return 0;
}
