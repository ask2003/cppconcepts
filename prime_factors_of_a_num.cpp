#include <iostream>

using namespace std;

void table(int &number){
    bool isPrime = true;
    for(int i=1;i<number;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime&&i>1&&number%i==0){
            cout<<i<<"\t";
        }
        
    }
}

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    table(number);

    return 0;
}
