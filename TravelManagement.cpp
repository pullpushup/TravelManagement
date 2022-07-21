#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Customers
{
    public:
            string name, gender, address;
            int age, phoneNo, cusID;

            void detDetails()
            {
                cout <<"Enter Customer ID: ";
                cin >> cusID;
                cout <<"Enter Name: ";
                cin >> name;
                cout <<"Enter Age: ";
                cin >> age;
                cout <<"Enter Phone no: ";
                cin >> phoneNo;
                cout <<"Enter Address: ";
                cin >> address;
                cout <<"Enter Gender: ";
                cin >> gender;
            };
};
class CABSTR{

};

class Booking
{

};
class Charges
{

};

int main()
{
    cout << "Hello World" <<endl;
    return 0;
}