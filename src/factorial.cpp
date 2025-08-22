#include<iostream>
using namespace std;
int main()
{
    int nb,i=1,res=1;
    cout << "Enter a integer :";
    cin  >> nb;
    while(i <= nb)
    {
        res=res*i;
        i++;
    };
      cout << "The factorialof "  << nb  << " is "  << res   << endl;
      return 0;
}