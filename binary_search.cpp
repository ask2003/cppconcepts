#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int A[] = {6,8,13,17,20,22,25,28,30,35};
    int arrsize = sizeof(A)/sizeof(A[0]);
    int low=0;
    int high=arrsize;
    
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    
    while(low<=high){
        int mid = (low + high)/2;
        if(key==A[mid]){
            cout<<key<<" found at index "<<low;
            return 0;
        }
        else if(key<A[mid])high =mid-1;
        else low=mid+1;
    }
    cout<<"key not found";
    return 0;
}