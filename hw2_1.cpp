  
/*
 * Title: hw2_1.cpp
 * Abstract: This program reads two timestamps of two events from a user 
             and displays the difference between the two timestamps
 * Author: Justin Mello
 * ID: 2002
 * Date: 03/15/2021
 */


#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <iomanip>
#include <iomanip>

using namespace std;
int main() {

    string string1;
    string string2;
    double result;
    cin >> string1 >> string2;

    double hour1, hour2, min1, min2, sec1, sec2;
    double hour3, min3, sec3;


    string1.erase(remove(string1.begin(), string1.end(), ':'), string1.end());
    string2.erase(remove(string2.begin(), string2.end(), ':'), string2.end());

    hour1 = stod(string1.substr(0,2));
    hour2 = stod(string2.substr(0,2));
    min1 = stod(string1.substr(2,2));
    min2 = stod(string2.substr(2,2));
    sec1 = stod(string1.substr(4,2));
    sec2 = stod(string2.substr(4,2));

//    double num1 = stod(string1);
//    double num2 = stoi(string2);
//    result = difftime(num2,num1);

//    cout << result;

    if(sec1 > sec2) {
        min2--;
        sec2 += 60;
        sec3 = sec2 - sec1;
    }
    else
        sec3 = sec2 - sec1;

    if(min1 > min2) {
        hour2--;
        min2 += 60;
        min3 = min2 - min1;
    }
    else {
        min3 = min2 - min1;
    }

    if(hour1 > hour2) {
        hour3 = hour1 - hour2;
        hour3 = 24 - hour3;
    }
    else {
        hour3 = hour2 - hour1;
    }

    cout << setfill('0') << setw(2) << hour3 << ":" << setfill('0') << setw(2)<< min3 << ":" << setfill('0') << setw(2) << sec3;
    return 0;



}
