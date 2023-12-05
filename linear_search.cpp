
#include <iostream>

using namespace std;
int main()
{
    //printf("Hello World");
    int len;
    cout<<"enter the length of array: ";
    cin>>len;
    int A[len];
    for(int i=0;i<len;i++) {cout<<"Enter the element "<<i+1<<": "; cin>>A[i];}
    int key;
    cout<<"enter the key: ";
    cin>>key;
    for(int i=0;i<len;i++){
        if(key==A[i]){cout<<"Element "<<key<<" found at index "<<i;return 0;}
    }
    cout<<"not found";
}