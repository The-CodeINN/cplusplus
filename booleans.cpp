#include <iostream>

using namespace std;

int boolean() {
    // Traffic example

    bool red_light {true};
    bool green_light {false};

    if(red_light == true) {
        cout << "Stop" << endl;
    } else {
        cout << "Go through" << endl;
    }

    if(green_light) {
        cout << "The light is green" << endl;
    } else {
        cout << "The light is not green" << endl;
    }

    cout << ::boolalpha;
    cout << "green light: " << green_light << endl;


    return 0;
}

