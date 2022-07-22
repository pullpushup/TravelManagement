#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>

using namespace std;

class Customers
{
    public:
            string name, gender, address;
            int age, phoneNo;
            static int cusID;
            char all[999];

            void getDetails()
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

int Customers::cusID;

class Cabs
{
    public:
        int cabChoice, KM;
        float cabcost; 
        static float lastCabCost;

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
                        //menu(); 
                        }
                cout<< "\nPress 1 to Redirect to Main Menu: ";
                cin >> hireCab;
                system("CLS");
                if(hireCab == 1){
                  //  menu()
                }
                else
                {
                   // menu()
                }
            
        }


};
float Cabs::lastCabCost;

class Booking
{
    public:
        int pickHotel;
        int packageHotel;
       static float hotelPrice;
        int gotomenu;

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

                cout << "\nPress another key to back or\nEnter Package number you want to book: ";
                cin >> packageHotel;  
                
                if(pickHotel == 1){
                    hotelPrice = 500.00;
                     cout << "\nYou have successfully booked Standard Pack at Taj Mahal Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else if(pickHotel == 2){
                    hotelPrice = 1000.00;
                     cout << "\nYou have successfully booked Premium Pack at Taj Mahal Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else if(pickHotel == 3){
                    hotelPrice = 1500.00;
                     cout << "\nYou have successfully booked Luxury Pack at Taj Mahal Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else{
                    cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                    Sleep(1100);
                    system("CLS");
                    hotels();
                }
                
                
               cout <<"\nPress 1 to redirect main menu: ";
               cin >> gotomenu;
               if(gotomenu ==1){
                    //menu();
               }else{
               // menu();
               }
            }
               else if(pickHotel == 2)
            {
                cout << "--------------------------Hilton--------------------------\n" << endl;
                cout << "The GarDen, SeaFacing, Food, BreakFast. Enjoy all you can drink and eat. Be our guest." << endl;

                cout << "Packages offered by Hilton Hotel:\n" <<endl;

                cout << "1. Standard Pack" << endl; 
                cout << "\tAll basic facilities you need just for: 750 Euros" << endl; 
                cout << "2. Premium Pack" << endl; 
                cout << "\t EnjoyPremium: 1000 Euros" << endl; 
                cout << "3. Luxury Pack" << endl; 
                cout << "\t Live like a Luxury at: 2000 Euros" << endl; 

                cout << "\nPress another key to back or\nEnter Package number you want to book: ";
                cin >> packageHotel;  
                
                if(pickHotel == 1){
                    hotelPrice = 750.00;
                     cout << "\nYou have successfully booked Standard Pack at Hilton Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else if(pickHotel == 2){
                    hotelPrice = 1000.00;
                     cout << "\nYou have successfully booked Premium Pack at Hilton Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else if(pickHotel == 3){
                    hotelPrice = 2000.00;
                     cout << "\nYou have successfully booked Luxury Pack at Hilton Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else{
                    cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                    Sleep(1100);
                    system("CLS");
                    hotels();
                }
                
               
               cout <<"\nPress 1 to redirect main menu: ";
               cin >> gotomenu;
               if(gotomenu ==1){
                    //menu();
               }else{
               // menu();
               }
            }

             else if(pickHotel == 3)
            {
                cout << "--------------------------Marriott--------------------------\n" << endl;
                cout << "The GarDen, SeaFacing, Food, BreakFast. Enjoy all you can drink and eat. Be our guest." << endl;

                cout << "Packages offered by Marriott Hotel:\n" <<endl;

                cout << "1. Standard Pack" << endl; 
                cout << "\tAll basic facilities you need just for: 450 Euros" << endl; 
                cout << "2. Premium Pack" << endl; 
                cout << "\t EnjoyPremium: 900 Euros" << endl; 
                cout << "3. Luxury Pack" << endl; 
                cout << "\t Live like a Luxury at: 1200 Euros" << endl; 

                cout << "\nPress another key to back or\nEnter Package number you want to book: ";
                cin >> packageHotel;  
                
                if(pickHotel == 1){
                    hotelPrice = 450.00;
                     cout << "\nYou have successfully booked Standard Pack at Marriott Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else if(pickHotel == 2){
                    hotelPrice = 900.00;
                     cout << "\nYou have successfully booked Premium Pack at Marriott Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else if(pickHotel == 3){
                    hotelPrice = 1200.00;
                     cout << "\nYou have successfully booked Luxury Pack at Marriott Hotel" <<endl;
                     cout << "Go back to main menu for Recepit" <<endl;
                }
                else{
                    cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                    Sleep(1100);
                    system("CLS");
                    hotels();
                }
                
                int gotomenu;
               cout <<"\nPress 1 to redirect main menu: ";
               cin >> gotomenu;
               if(gotomenu ==1){
                    //menu();
               }else{
               // menu();
               }
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" <<endl;
                Sleep(1100);
                system("CLS");
                //menu();
            }

        }

};
    float Booking ::hotelPrice;
    

class Charges : public Booking, Cabs, Customers
{

    public:
            void printBill()
            {
                ofstream outf("receipt.txt");
                {
                    outf << "----------Dwivedi Travel Agency----------" << endl;
                    outf << "------------------Bill-------------------" << endl;
                    outf << "-----------------------------------------" << endl;

                    outf << "Customer ID: " <<Customers::cusID << endl << endl;
                    outf << "Description\t\t Total" << endl;
                    outf << "Hotel Cost:\t\t  " << fixed <<setprecision(2) <<Booking::hotelPrice << endl;
                    outf << "Travel (cab) cost:\t\t  " << fixed <<setprecision(2) <<Cabs::lastCabCost << endl;

                    outf << "-----------------------------------------" << endl;
                    outf << "Total Charge:\t\t" << fixed <<setprecision(2) <<Booking::hotelPrice+Cabs::lastCabCost << endl;
                    outf << "-----------------------------------------" << endl;
                    outf << "-----------------Thank You---------------" << endl;

                }
                outf.close();
            }

            void showBill()
            {
                ifstream inf("receipt.txt");
                {
                    if(!inf)
                    {
                        cout << "File opening error!" << endl;
                    }
                    while (!(inf.eof()))
                    {
                        inf.getline(all,999);
                        cout << all << endl;
                    }
                    
                }
                inf.close();
            }

};

void menu()
{
        int mainChoice;
        int inChoice;

        cout << "\t\t   *   Dwivedi Travls  *   \n" <<endl;
        cout << "---------------Main Menu---------------"  <<endl;

         cout << "_______________________________________"  <<endl;
         cout << "|\t\t\t\t\t"  <<endl;
         cout << "|\tCustomer Management ->1\t|"  <<endl;
         cout << "|\tCabs Management     ->2\t|"  <<endl;
         cout << "|\tBooking Management  ->3\t|"  <<endl;
         cout << "|\tCharges & Bill      ->4\t|"  <<endl;
         cout << "|\tExit                ->4\t|"  <<endl;
         cout << "|\t\t\t\t\t"  <<endl;
         cout << "|_______________________________________|"  <<endl;

         cout <<"\nEnter Your Choice: ";
         cin >> mainChoice;

         system("CLS");

         Customers a2;
         Cabs a3;
         Booking s4;
         Charges a5;

         if(mainChoice == 1)
         {
            cout << "---------------Customers---------------\n" <<endl;
            cout << "1. Enter New Customer" <<endl;
            cout << "2. See Old Customer" <<endl;

            cout << "\nEnter Choice: " <<endl;
            cin >> inChoice;

            system("CLS");
            if(inChoice == 1){
                a2.getDetails();
            }else if(inChoice == 2){
                a2.showDetails();
            }else{
                cout << "Invalid input! Redirecting to Previous Menu \nPlease wait!" <<endl;
                Sleep(1100);
                system("CLS");
                menu();
            }
         }
}

int main()
{
    cout << "Hello World" <<endl;
    return 0;
}