/*
Write a C++ program to rearrange a given sorted array of positive integers. 
Note: In final array, first element should be maximum value, second minimum value, 
third second maximum value, fourth second minimum value, fifth third maximum and so on.
*/
#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    int len;
    cout<<"Enter length: ";
    cin>>len;
    
    int arr[len];
    
    for(int i=0;i<len;i++){
        cout<<"Enter element number "<<i+1<<": ";
        cin>>arr[i];
    }
    
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int result[len];
    int left=0;
    int right = len-1;
    
    for(int i=0;i<len;i++){
        if(i%2==0){
            result[i]=arr[right];
            right--;
        }
        else{
            result[i]=arr[left];
            left++;
        }
    }
    
    cout << "Array elements after rearranging: ";

    for(int i=0;i<len;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
