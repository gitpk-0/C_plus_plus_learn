// comment
#include <iostream>

using namespace std;


// main function
int main()
{
    cout << "Hello\n"; // endl and \n create new lines
    cout << "Hello" << endl; 

    string phrase = "Giraffe Academy";
    cout << phrase;
    cout << "\n";

    // length function
    cout << phrase.length() << endl;

    // access index of strings
    cout << phrase[2] << endl;

    // find function
    cout << phrase.find("ffe", 0) << endl;  // returns index if found

    // substr function
    string phrase_sub = phrase.substr(8, 3);  // starts at index 8 and returns 3 characters
    cout << phrase_sub;

    return 0;
}
