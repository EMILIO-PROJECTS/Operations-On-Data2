#include <iostream>
#include <iomanip>

using namespace std;


int main () {

    system("cls");

  /*
     Weird Integral Types
    */

    short int a = 10;
    short int b = 20;

    char c1 = 'c';
    char c2 = 42;       // '*'


    cout << "sizeof(a): " << sizeof(a) << endl;
    cout << "sizeof(b): " << sizeof(b) << endl;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;


    auto result1 = a + b;     // 30
    auto result2 = c1 + c2;   // 99 + 42

    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;

    cout << "sizeof(result1): " << sizeof(result1) << endl;
    cout << "sizeof(result2): " << sizeof(result2) << endl;
}