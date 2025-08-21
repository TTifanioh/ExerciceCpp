#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
  // Resolve : ax^2 + bx + c =0 in R
  double  a,b,c,x1,x2,x3;
  double delta;
  cout << "Enter a  :" ;
  cin >> a;
   cout << "Enter b  :" ;
   cin >> b;
   cout << "Enter c  :" ;
   cin >> c;
  delta = b**2 -4*a*c;
  if (delta > 0){ 
    x1 = (-b + sqrt(delta))/2*a;
    x2 = (-b + sqrt(delta))/2*a;
   cout << "The solution are " << x1 << " and " << x2 << endl ;
  }
  else if (delta == 0){
  x3 = -b/2*a;
  cout << "The solution is " << x3 << endl;
  }
  else {
  cout << "The equation have not a solution";
 }
  return 0;
}
