#include <iostream>
#include <string>
using namespace std;

int main()
{
    //cout<<"Hello World";
    
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    
    int count=0;
    int max=0;
    string currword="";
    string maxword="";
    
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
            count++;
            currword+=str[i];
        }
        else if(str[i]==' '||str[i]=='\t'||str[i]=='\n'){
            if(count>max){
                max=count;
                maxword=currword;
            }
            count=0;
            currword="";
        }
        else{
            count=0;
            currword="";
        }
    }
    if (count > max) {
        max = count;
        maxword = currword;
    }
    
    maxword[maxword.length()]='\0';
    
    cout<<"max no if letters is: "<<max<<endl;
    cout<<"max word is: "<<maxword<<endl;
    
    return 0;
}
