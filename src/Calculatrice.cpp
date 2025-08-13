#include<iostream>
using namespace std;
int main()
{
  double nb1, nb2;
  double somme,soustraction,multiplication,division;
  int operation;
  cout << "Choisissez parmi les operation suivant:" << endl;
  cout << "1. Somme" << endl;
  cout << "2. Soustaction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "Quel operation veut tu faire ?";
  cin >> operation;
  cout << "Entrer le premier nombre:";
  cin >> nb1;
  cout >> "Entrer le deuxieme nombre:";
  cin >> nb2;
  switch(operation)
    {
      case 1:
      cout << nb1 + nb2;
      break;
      case 2:
      cout << nb1 - nb2;
      break;
      case 3:
      cout << nb1 * nb2;
      break;
      case 4:
      cout << nb1 / nb2;
      break;
    }
  return 0;  
}
