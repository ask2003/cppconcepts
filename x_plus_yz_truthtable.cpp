#include <iostream>

using namespace std;

int main()
{
    cout<<"X\tY\tZ\tXY+Z"<<endl;
    
    for(int x=0;x<=1;x++){
        for(int y=0;y<=1;y++){
            for(int z=0;z<=1;z++){
                cout<<x<<"\t"<<y<<"\t"<<z<<"\t"<<((x&&y)||z)<<endl;
            }
        }
    }

    return 0;
}
