/*
Write a function that takes your date of birth in YYYY, MM and DD format 
(separated by spaces) as input as well as the current date, 
in same format, and calculates your age in years, months and days
*/

#include <iostream>
#include <string>

using namespace std;

bool validity(string dob) {
    bool isvalid = true;
    int year, month, day;
    if (sscanf(dob.c_str(), "%d %d %d", &year, &month, &day) != 3) {
        isvalid = false;
    } else {
        if (dob.length() == 10 && dob[4] == ' ' && dob[7] == ' ' && (month >= 1 && month <= 12) && (day >= 1 && day <= 31)) {
            for (int i = 0; i < dob.length(); i++) {
                if (i != 4 && i != 7) {
                    if (!(dob[i] >= '0' && dob[i] <= '9')) {
                        isvalid = false;
                        return isvalid;
                    }
                }
            }
        } else {
            isvalid = false;
        }
    }
    return isvalid;
}

bool leapyear(int lyear){
    bool isleap = true;
    if(lyear%4==0){
        if(lyear%100==0){
            if(lyear%400==0){
                return isleap;
            }
        }else{isleap=false;return isleap;}
    }return isleap;
}

void agecalc(string dob, string cur) {
    int cyear, cmonth, cday;
    int dyear, dmonth, dday;

    cyear = stoi(cur.substr(0, 4));
    cmonth = stoi(cur.substr(5, 2));
    cday = stoi(cur.substr(8, 2));

    dyear = stoi(dob.substr(0, 4));
    dmonth = stoi(dob.substr(5, 2));
    dday = stoi(dob.substr(8, 2));

    int ageyear = 0;
    int agemonth = 0;
    int ageday = 0;

    while (dyear < cyear || (dyear == cyear && dmonth < cmonth) || (dyear == cyear && dmonth == cmonth && dday < cday)) {
        // Increment day
        ageday++;

        // Check for month rollover
        if ((dmonth == 1 || dmonth == 3 || dmonth == 5 || dmonth == 7 || dmonth == 8 || dmonth == 10 || dmonth == 12) && ageday > 31) {
            agemonth++;
            ageday = 1;
        } else if ((dmonth == 4 || dmonth == 6 || dmonth == 9 || dmonth == 11) && ageday > 30) {
            agemonth++;
            ageday = 1;
        } else if (dmonth == 2) {
            if ((leapyear(dyear) && ageday > 29) || (!leapyear(dyear) && ageday > 28)) {
                agemonth++;
                ageday = 1;
            }
        }

        // Check for year rollover
        if (agemonth > 12) {
            ageyear++;
            agemonth = 1;
        }
    
        // Increment date
        dday++;

        // Check for month rollover
        if ((dmonth == 1 || dmonth == 3 || dmonth == 5 || dmonth == 7 || dmonth == 8 || dmonth == 10 || dmonth == 12) && dday > 31) {
            dmonth++;
            dday = 1;
        } else if ((dmonth == 4 || dmonth == 6 || dmonth == 9 || dmonth == 11) && dday > 30) {
            dmonth++;
            dday = 1;
        } else if (dmonth == 2) {
            if ((leapyear(dyear) && dday > 29) || (!leapyear(dyear) && dday > 28)) {
                dmonth++;
                dday = 1;
            }
        }

        // Check for year rollover
        if (dmonth > 12) {
            dyear++;
            dmonth = 1;
        }
    }

    cout << "Your age is: " << ageyear << " years " << agemonth << " months " << ageday << " days." << endl;
}

int main() {
    string dob;
    cout << "Enter the date of birth: ";
    getline(cin, dob);

    bool here = validity(dob);
    while (!here) {
        cout << "Enter the DOB in the correct format: ";
        getline(cin, dob);
        here = validity(dob);
    }

    cout << "DOB entered is: " << dob << endl;

    string cur;
    cout << "Enter the current date: ";
    getline(cin, cur);

    here = validity(cur);
    while (!here) {
        cout << "Enter the current date in the correct format: ";
        getline(cin, cur);
        here = validity(cur);
    }

    cout << "Current date entered is: " << cur << endl;
    
    agecalc(dob,cur);
    
    return 0;
}
