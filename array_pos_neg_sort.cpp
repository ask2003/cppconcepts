/*
Write a C++ program to move all 
negative elements of an array of integers to the end of the array. 
This is done without changing the order of the 
positive and negative elements of the array
*/

#include <iostream>

using namespace std;

int main()
{
    int len;
    cout<<"Enter length: ";
    cin>>len;
    
    int arr[len];
    
    for(int i=0;i<len;i++){
        cout<<"Enter element number "<<i+1<<": ";
        cin>>arr[i];
    }
    
    int posele=0;
    int negele=0;
    
    int index=0;
    int index2=0;
    for(int i=0;i<len;i++){
        if(arr[i]>=0){
            posele++;
        }
        if(arr[i]<0){
            negele++;
        }
    }
    
    int poarr[posele];
    int negarr[negele];
    for(int i=0;i<len;i++){
        if(arr[i]>=0){
            poarr[index]=arr[i];
            index++;
        }
        else {
            negarr[index2]=arr[i];
            index2++;
        }
    }
    
    int result[len];
    
    for(int i=0;i<posele;i++){
        result[i]=poarr[i];
    }
    for(int i=0;i<negele;i++){
        result[posele+i]=negarr[i];
    }
    
    cout<<"resultant array: ";
    for(int i=0;i<len;i++){
        cout<<result[i]<<" ";
    }

    return 0;
}
