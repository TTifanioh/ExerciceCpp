#include<iostream>
using namespace std;
// structure define
struct user
{
    char name,first_name,address;
    int age;
};
// principal program
int main()
{
  user A,B;
  // Display the information user
  cout << "NAME:",cin >> A.name;
   cout << "FIRST NAME::",cin >> A.first_name;
   cout << "AGE::",cin >> A.age;
   cout << "ADDRESS:",cin >> A.address;
  return 0;
}
