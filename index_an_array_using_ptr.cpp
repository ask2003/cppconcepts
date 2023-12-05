#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    int arr[] = {1,2,3,4,5};
    
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    
    int *ptr;
    
    ptr = (int*)&arr;
    int sum=0;
    
    for(int i=0;i<arrsize;i++){
        cout<<"At index: "<<i<<"\t"<<"element is: "<<*ptr<<"\t"<<"address of the element is: "<<ptr<<endl;
        ptr++;
    }
    cout<<endl;
    ptr = (int*)&arr;
    
    for(int i=0;i<arrsize;i++){
        sum+=*ptr;
        ptr++;
    }
    
    cout<<"sum of all elements is: "<<sum<<endl;
    return 0;
}

