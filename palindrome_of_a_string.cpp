#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout<<"you enter the string: ";
    getline(cin,str);
    
    string::iterator it;
    string str2;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
    }
    
    for(it=str.end()-1;it!=str.begin()-1;it--){
        str2+=*it;
    }
    str2[str2.length()]='\0';
    
    if(str==str2){
        cout<<"palindrome"<<endl;
        return 0;
    }
    cout<<"not a palindrome"<<endl;
    return 0;
}
