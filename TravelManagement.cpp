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
            char all[999];

            void detDetails()
            {
                ofstream out("old-customers.txt", ios::app);
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
                }
                out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nPhone Number: " << phoneNo << "\nAdress :" << address << "\nGender :" << gender << endl;
                out.close();
                cout <<"\nSaved \nNote: We save your personal data for no more than 8 months\n" << endl;
            }

            void showDetails()
            {
                ifstream in("old-customers.txt")
                {
                    if(!in)
                    {
                        cout << "File Error!" <<endl;
                    }
                    while (!in.eof())
                    {
                        in.getline(all,999);
                        cout << all << endl;
                    }
                    in.close();
                    
                }
            }

};

class Cabs
{

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