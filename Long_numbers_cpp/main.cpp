#include <iostream>
#include <string>
#include <cmath>
#include "long_int.h"

using namespace std; // + class big_integer

int main()
{
    string a_ll,b_ll;
    cin >> a_ll;
    cin >> b_ll;
    cout << a_ll << endl;
    cout << b_ll << endl;
    big_integer a = a_ll,b = b_ll;
    if (a >= 0) {
        cout << "первое число: " << a.bin();
    }
    else {
        a = -1*a;
        cout << "первое число: -" << a.bin();
        a = -1*a;
    }


    if (b >= 0) {
        cout << ", второе число: " << b.bin() << endl;
    }
    else {
        b = -1*b;
        cout << ", второе число: -" << b.bin() << endl;
        b = -1*b;
    }


    big_integer c = (a + b);
    if (c >= 0) {
        cout << "сумма: " << c.bin() << " or " << c;
    }
    else {
        c = -1*c;
        cout << "сумма: -" << c.bin() << " or " << c;
    }
    cout << endl;

    c = (a - b);
    if (c >= 0) {
        cout << "разность: " << c.bin();
    }
    else {
        c = -1*c;
        cout << "разность: -" << c.bin();
    }
    cout << endl;

    c = (a * b);
    if (c >= 0) {
        cout << "произведение: " << c.bin();
    }
    else {
        c = -1*c;
        cout << "произведение: -" << c.bin();
    }
    cout << endl;

    c = (a / b);
    if (c >= 0) {
        cout << "частное: " << c.bin();
    }
    else {
        c = -1*c;
        cout << "частное: -" << c.bin();
    }
    cout << endl;
}
