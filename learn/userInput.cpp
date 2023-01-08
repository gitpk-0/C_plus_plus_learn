// comment
#include <iostream>

using namespace std;


// main function
int main()
{
    // int age;
    string name;
    // prompt the user
    cout << "Enter your name: ";
    getline(cin, name); // receives an entire line of user input

    // cin takes in characters and numbers
    // cin >> age;

    // cout << "You are " << age << " years old" << endl;
    cout << "Hello " << name << endl;

    return 0;
}
