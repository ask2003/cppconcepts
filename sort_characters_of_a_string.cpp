#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string::iterator it, it2;

    for (it = str.begin(); it != str.end(); it++) {
        for (it2 = it + 1; it2 != str.end(); it2++) {
            if (*it > *it2 && isalpha(*it) && isalpha(*it2)) {
                char temp = *it;
                *it = *it2;
                *it2 = temp;
            }
        }
    }

    cout << "Sorted string: " << str << endl;

    return 0;
}
