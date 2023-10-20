#include <iostream>
#include <string>
using namespace std;

int addNum(int num_1, int num_2) {
    int sum = num_1 + num_2;
    return sum;
}

int Greet() {
    /*
    string name;
    int age;

    cout << "\nPlease enter your name and age: " << endl;
    // cin >> name; 
    // cin >> age ;

    cin >> name >> age;

    cout << "\nYour name is " << name << " and you're " << age << " years old." << endl;

    */

//    Data with spaces
    int age;
    string fullName;

    cout << "\nPlease enter your name and age: " << endl;

    getline(cin, fullName); 
    cin >> age ;

    cout << "Your name is " << fullName << " and your are " << age << " years old" << endl;


    return 0;
}

// int main() {
    
//     /*
//     int sum;

//     sum = addNum(3,5);

//     cout << "The sum is: " << sum << endl;
//     cerr << "Hello" << endl;
//     */

//     Greet();

//     return 0;
// }

int Greeting() {
    int age;
    string fullName;

    cout << "Please enter your name and age: " << endl;

    getline(cin, fullName);
    cin >> age;

    cout << "Your name is " << fullName << " and your age is " << age << endl;

    return 0;
}

// int main() {
//     Greeting();

//     return 0;
// }


