#include <iostream>
#include <iomanip>

using namespace std;

// type        size       precision 
// float        4           7
// double       8           15(r**)
// long double  12          >double

int fracNum() {
    float num1 {1.12345678901234567890f};
    double num2 {1.12345678901234567890};
    long double num3 {1.12345678901234567890L};

    cout << "size of float: " << sizeof(num1) << endl;
    cout << "size of double: " << sizeof(num2) << endl;
    cout << "size of long double: " << sizeof(num3) << endl;

    cout << "------------------" << endl;

    // Precision
    cout << ::setprecision(20); 
    cout << "Num 1: " << num1 << endl;  //7
    cout << "Num 2: " << num2 << endl; //17
    cout << "Num 3: " << num3 << endl; //20

    // use scientific notation to make sense of large numbers - (e)

    // floating/0  - Infinity(+/-)
    // 0/0         -  NaN

    return 0;
}

// int main() {
//     fracNum();

//     return 0;
// }