#include "functions.h"

void start()
{
    int n;

    system("CLS"); // used for clearing the console
    cout << "***----------------------      Welcome to Student Management System    -----------------***" << endl;
    cout << "Please choose whether you are student or teacher: " << endl;
    cout << "1. Student" << endl;
    cout << "2. Academic Staff" << endl;
    cout << "3. End process" << endl;
    cout << "Your choice: ";
    cin >> n;

    if (n == 1)
    {
        Student student()
    }
    else if (n == 2)
    {
        // Staff staff.login();
        cout << "staff";
    }
    else
    {
        cout << "Have a nice day ^-^ ";
    }
}


