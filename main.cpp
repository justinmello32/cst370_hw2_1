#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>

using namespace std;
int main() {



    string string1;
    string string2;
    int result;
    cin >> string1 >> string2;

    string1.erase(remove(string1.begin(), string1.end(), ':'), string1.end());
    string2.erase(remove(string2.begin(), string2.end(), ':'), string2.end());

    double num1 = stoi(string1);
    double num2 = stoi(string2);

    result = difftime(num2,num1);

    cout << result;
    return 0;


}
