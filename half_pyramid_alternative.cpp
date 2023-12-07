//Half Pyramid Alternative
/*
*
*A
*A*
*A*A
*A*A*
*A*A*A
*/

#include <iostream>
using namespace std;
#include <cmath>
#include <string.h>

int main()
{
    char a='A';
   for(int i=1;i<=6;i++){
       for(int j=1;j<=i;j++){
           if(j%2!=0){
               cout<<"*";
           }
           else{
               cout<<a;
           }
       }cout<<endl;
   }

    return 0;
}
