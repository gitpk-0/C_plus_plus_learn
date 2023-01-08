#include <iostream>
#include <cmath> // math functions library

using namespace std;


// main function
int main()
{
    cout << 5 + 7 << endl;
    cout << 5 - 7 << endl;
    cout << 5 * 7 << endl;
    cout << 5 / 7 << endl;

    cout << 10 % 3 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum++;

    cout << wnum << endl;

    // from cmath library
    cout << pow(2, 5) << endl;
    cout << sqrt(36) << endl;
    cout << round(4.6) << endl;
    cout << round(4.3) << endl;
    cout << ceil(4.3) << endl;
    cout << floor(4.3) << endl;
    cout << fmax(4, 103) << endl;
    cout << fmin(4, 103) << endl;


    return 0;
}
