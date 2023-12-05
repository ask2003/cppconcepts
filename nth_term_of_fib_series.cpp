/*
Using recursion, define a function to know nth term of a Fibonacci series.
Nth term of Fibonacci series is
F(n) = F(n-1)+F(n-2)
F(0) = 0
F(1) = 1
F(2) = F(1)+F(0) = 1+0 = 1
F(3) = F(2)+F(1) = 1+1 = 2
F(4) = F(3)+F(2) = 2+1 = 3

*/

#include <iostream>

using namespace std;
long fibon(long num){
    
    if(num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }
    else{
        return fibon(num-1)+fibon(num-2);
    }
}

int main()
{
    long num;
    cout<<"Enter the nth term: ";
    cin>> num;
    
    if (num < 0) {
        cout << "Invalid input. Please enter a non-negative longeger." << endl;
        return 1;
    }
    
    long c = fibon(num);
    cout<<"nth term is:" <<c;
    
    return 0;
}
