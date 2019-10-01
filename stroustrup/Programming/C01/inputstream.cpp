//
//  inputstream.cpp
//  stroustrup
//
//  Created by Yohan Lee on 10/1/19.
//

#include "std_lib_fac.h"

int main()
{
    string prev = "";
    string curr;
    while(cin >> curr) {
        if (prev == curr) {
            cout << "repeated word: " << curr << endl;
        }
        prev = curr;
    }
    
    return 0;
}
