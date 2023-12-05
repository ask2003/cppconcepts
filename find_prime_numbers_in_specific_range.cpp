#include <iostream>

using namespace std;

void prime(int low, int high){
    for(int i=low;i<=high;i++){
        bool isprime =true;
        
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime&&i>1){
            cout<<i<<"\t";
        }
    }
}

int main()
{
    int low;
    cout<<"Enter the low range: ";
    cin>>low;
    
    int high;
    cout<<"Enter the high range: ";
    cin>>high;
    
    prime(low,high);

    return 0;
}
