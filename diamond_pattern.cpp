#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1||j==1){
                cout<<"*";
            }
            else{
                cout<<"**";
            }
        }cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-1;j++){
            if(j==1){
                cout<<"*";
            }
            if((j>1)&&(i+j<=n)){
                cout<<"**";
            }
        }cout<<endl;
    }
    
    return 0;
}
