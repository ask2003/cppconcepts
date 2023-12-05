#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    int sum=0;
    string number="";
    int temp;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            if(isdigit(str[i])){
                number+=str[i];
            }
            else{
                if(!number.empty()){
                    temp=stoi(number);
                    sum+=temp;
                    number="";
                }
            }
        }
    }
    if (!number.empty()) {
        int temp = stoi(number);
        sum += temp;
    }
    //number.push_back('\0');
    cout<<"sum of all numbers: "<<sum;
    return 0;
}

