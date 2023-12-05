#include <iostream>

using namespace std;


int main()
{
    //printf("Hello World");
    int m,n;
    cout<<"enter the 1st num and 2nd num: ";
    cin>>m>>n;
    while(m!=n){
    while(m>n){
        m=m-n;
    }
    while(n>m){
        n=n-m;
    }
    }
    if(m==n){
        cout<<"gcd is: "<<m;
        //fflush(stdout);
    }
    
    return 0;
}
