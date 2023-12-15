#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Enter the decimal number: "<<endl;
    int dec;
    cin>>dec;
    
    int len;
    len=log2(dec)+1;
    
    int arr[len];
    int i=0;
    
    while(dec>0){
        arr[i]=dec%2;
        dec=dec/2;
        i++;
    }
    
    cout << "Binary number: " << endl;
    for (int j = len - 1; j >= 0; j--) {
        cout << arr[j];
    }

    return 0;
}
