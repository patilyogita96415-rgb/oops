
#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, long long> states;

    states["Maharashtra"] = 112374333;
    states["Gujarat"] = 60439692;
    states["Rajasthan"] = 68548437;
    states["Goa"] = 1458545;
    states["Karnataka"] = 61095297;

    string name;

    cout << "Enter State Name: ";
    cin >> name;

    if(states.find(name) != states.end()) {
        cout << "Population of " << name
             << " is " << states[name];
    }
    else {
        cout << "State Not Found!";
    }

    return 0;
}
