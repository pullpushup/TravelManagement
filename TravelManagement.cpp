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
                ifstream in("old-customers.txt");
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
    public:
        int cabChoice, KM;
        float cabcost, lastCabCost;

        void cabDetails()
        {
            cout << "We have done a partnership with Safest and fastest Cab company to provide service in entire city" <<endl;
            cout << "--------------------------Huber Cab--------------------------\n" <<endl;
            cout << "1. Rent a Standard Cab - EUR 1 for 1KM" <<endl;
            cout << "2. Rent a Luxury Cab - EUR 2 for 1KM" <<endl;

            cout << "\n Calculate the entire cost of your journey" <<endl;
            cout << "Enter whcih kind of cab you need:"; 
            cin >> cabChoice;
            cout << "Enter KM of your destination:"; 
            cin >> KM;

            int hireCab;
            if(cabChoice ==1){
                cabcost = KM *5;
                cout << "\nYour Total Cab fare :" << cabcost << "in Euro, For Standard Cab";
                cout <<"Press 1 to call this driver: or";
                cout <<"Press 2 tp select another cab: ";
                cin>> hireCab; 

                system("CLS");

                if(hireCab == 1){
                     lastCabCost = cabcost;
                     cout << "\nYou have booked cab sucessfully" <<endl;
                     cout << "Collect Receipt from Menu " <<endl;
                }
                else if(hireCab == 2)
                {
                    cabDetails();
                }else{cout << "Invalid Input! Redirecting to previous menu \nPlease Wait!" <<endl;
                        Sleep(999);
                        system("CLS");
                        cabDetails(); }
            }
            else if(cabChoice == 2)
            {
                 cabcost = KM *10;
                cout << "\nYour Total Cab fare :" << cabcost << "in Euro, For Standard Cab";
                cout <<"Press 1 to call this driver: or";
                cout <<"Press 2 tp select another cab: ";
                cin>> hireCab; 

                system("CLS");

                if(hireCab == 1){
                     lastCabCost = cabcost;
                     cout << "\nYou have booked cab sucessfully" <<endl;
                     cout << "Collect Receipt from Menu " <<endl;
                }
                else if(hireCab == 2)
                {
                    cabDetails();
                }
                
            else
                {cout << "Invalid Input! Redirecting to previous menu \nPlease Wait!" <<endl;
                        Sleep(1100);
                        system("CLS");
                        cabDetails();
                         }
               
            } else
               {cout << "Invalid Input! Redirecting to Main menu \nPlease Wait!" <<endl;
                        Sleep(1100);
                        system("CLS");
                        menu(); 
                        }
                cout<< "\nPress 1 to Redirect to Main Menu: ";
                cin >> hireCab;
                system("CLS");
                if(hireCab == 1){
                    menu()
                }
                else
                {
                    menu()
                }
            
        }


};

class Booking
{
    public:
        int pickHotel;
        int packageHotel;
        float hotelPrice;

        void hotels()
        {
            string hotelNo[] = {"Taj Mahal", "Hilton", "Marriott"};
            for(int a = 0; a<3; a++)
            {
                cout<< (a+1) << ". Hotel" << hotelNo[a]  << endl;
            }
            cout << "\nCurrently we Collaborated  with all hotels" <<endl;
            cout << "Press any key to back or\nEnter number of the hotel you want to book: ";
            cin >> pickHotel;
            system("CLS");

            if(pickHotel == 1)
            {
                cout << "--------------------------Taj Mahal--------------------------\n" << endl;
                cout << "The GarDen, SeaFacing, Food, BreakFast. Enjoy all you can drink and eat. Be our guest." << endl;

                cout << "Packages offered by Taj Mahal Hotel:\n" <<endl;

                cout << "1. Standard Pack" << endl; 
                cout << "\tAll basic facilities you need just for: 500 Euros" << endl; 
                cout << "2. Premium Pack" << endl; 
                cout << "\t EnjoyPremium: 1000 Euros" << endl; 
                cout << "3. Luxury Pack" << endl; 
                cout << "\t Live like a Luxury at: 1500 Euros" << endl; 

                cout << "\nPress another key to back or\nEnter Package number "

            }
        }

};
class Charges
{

};

int main()
{
    cout << "Hello World" <<endl;
    return 0;
}