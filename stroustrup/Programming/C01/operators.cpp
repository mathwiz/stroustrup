//
//  operators.cpp
//  stroustrup
//
//  Created by Yohan Lee on 9/29/19.
//

#include "std_lib_fac.h"

int main()
{
    cout << "Please enter an integer: ";
    int n;
    cin >> n;
    cout << "n == " << n << endl
        << "n + 1 == " << n + 1 << endl
        << "three times n == " << n * 3 << endl
        << "twice n == " << n * 2 << endl
        << "n squared == " << n * n << endl
        << "half of n == " << n / 2.0 << endl
        << "square root of n == " << sqrt(n + 0.0) << endl;
    return 0;
}
