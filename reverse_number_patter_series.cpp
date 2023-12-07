#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

//studytonight.com/cpp-programs/cpp-program-to-print-a-given-pattern-or-series-like-12345-5432-234-43-3

int i,j,n,reverse;

int main()
{
    cout<<"Enter The Number To Print A Pattern\n";
    cin>>n;
    int dig=log10(n);

    cout<<"\n"<<n<<", ";  
  
    for(i=1;i<=dig;i++){
        while (n != 0){
            reverse = reverse * 10;
            reverse = reverse + n%10;
            n = n/10;
        }
        n=reverse/10;
        cout<<n;
        reverse=0;
        if (i < dig) {
            cout << ", ";
        }
    }  
    return 0; 
}
