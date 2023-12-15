#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the square matrix size (l*l): "<<endl;
    int size;
    cin>>size;
    
    cout<<"Enter the row number of matrix: "<<endl;
    int rownumber;
    cin>>rownumber;
    
    cout<<"Enter the matrix value: "<<endl;
    
    int arr[size][size];
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"Enter "<<i+1<<" row "<<j+1<<" col. element of the matrix: ";
            cin>>arr[i][j];
        }
    }
    
    int arr1[size];
    
    for(int j=0;j<size;j++){
        arr1[j]=arr[rownumber-1][j];
    }
    
    cout<<"Matrix row is given below: "<<endl;
    
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Number of even number in row is = ";
    
    int count=0;
    for(int i=0;i<size;i++){
        if(arr1[i]%2==0){
            count++;
        }
    }
    cout<<count<<endl;
    
    
    return 0;
}
