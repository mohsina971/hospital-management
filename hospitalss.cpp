
#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Hospital Management System =====" << endl;
    cout << "1. Patient Registration" << endl;
    cout << "2. Doctor Information" << endl;
    cout << "3. Appointment" << endl;
    cout << "4. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "Patient Registered Successfully." << endl;
        break;

    case 2:
        cout << "Doctor: Dr. Rahman" << endl;
        break;

    case 3:
        cout << "Appointment Booked Successfully." << endl;
        break;

    case 4:
        cout << "Thank You!" << endl;
        break;

    default:
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}
