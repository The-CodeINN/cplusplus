#include <iostream>
using namespace std;

int addNum(int num_1, int num_2) {
    int sum = num_1 + num_2;
    return sum;
}

int Greet() {
    string name;
    int age;

    cout << "Please type your name: " << endl;
    cin >> name;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Your name is " << name << " and you're " << age << " years old." << endl;

    return 0;
}

int main() {
    int sum;

    sum = addNum(3,5);

    cout << "The sum is: " << sum << endl;
    cerr << "Hello" << endl;
    Greet();

    return 0;
}
