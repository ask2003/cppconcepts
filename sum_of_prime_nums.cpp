#include <iostream>

using namespace std;

bool isprime(int temp1){
    bool temp=true;
    for(int i=2;i<temp1/2;i++){
        if(temp1%i==0){
            temp=false;
            return temp;
            break;
        }
    }
    return temp;
}

void sum(int num){
    int num1=2;
    int num2;
    for(int i=0;i<num;i++){
        if(isprime(num1)==true){
            num2=num-num1;
            if(isprime(num2)==true){
                cout<<num<<" = "<<num1<<" + "<<num2<<endl;
            }
        }
        num1++;
        if(num1>num2){
            break;
        }
    }
}

int main()
{
    int num;
    cout<<"Enter any positive integer :: ";
    cin>>num;
    
    sum(num);
    
    
    return 0;
}
