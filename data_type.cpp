#include <iostream>
#include <string>

using namespace std;


// Data types
/*
    1. int - stores decimals and occupies 4 bytes or more in memory
    2. double
    3. float
    4. char
    5. bool
    6. void
    7. auto - keyword to deduce other types
*/

/*
    How to intialize integers in c++
    1.  braced initialization
        int exampleVar {}, int exampleVar_2 {3}

    2. functional initializtion
        int exampleVar(2)
    
    3. Assignment initialization
        int exampleVar = 2
*/
int data_type() {

    int num_1;

    int num_2 {};
    int num_3 {1};

    int num_4(2.9);

    int num_5 = 3;

    cout << "Number 1: " << sizeof(num_1) << endl;
    cout << "Number 2: " << sizeof(num_2) << endl;
    cout << "Number 3: " << sizeof(num_3) << endl;
    cout << "Number 4: " << num_4 << endl;
    cout << "Number 5: " << num_5 << endl;

    return 0;
}

int main() {
    data_type();

    return 0;
}


