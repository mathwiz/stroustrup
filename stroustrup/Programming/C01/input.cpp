#include "std_lib_fac.h"

int main()
{
    cout << "Please enter your first name and age separated by a space: \n";
    string first_name;
    double age;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << "! (aged " << age * 12.0 << " months)\n";
}
