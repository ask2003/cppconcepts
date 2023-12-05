#include <iostream>
using namespace std;

int hcf(int n1, int n2);

int main()
{
   int n1, n2;

   cout << "\nEnter 1st positive integer :: ";
   cin >> n1;
    cout << "\nEnter 2nd positive integer :: ";
   cin >> n2;

   cout << "\nGCD of Two Numbers [ " << n1 << " & " <<  n2 << " ] is :: " << hcf(n1, n2)<<"\n";

   return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else
       return n1;
}
