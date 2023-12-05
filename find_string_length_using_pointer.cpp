#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int maxlen;
    cout << "Enter the max length of the string: ";
    cin >> maxlen;
    cin.ignore();

    char str[maxlen + 1];

    int index = 0;

    cout << "Enter the string: ";

    while (index < maxlen && cin.get(str[index]) && str[index] != '\n') {
        index++;
    }
    str[index] = '\0';

    cout << "String you entered is: " << str << endl;

    char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length of the string is: " << length << endl;

    return 0;
}
