// Week 03 - Shipping Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Andreh Naisan
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // the program intro
    cout << setw(75) << setfill('.') << "." << endl;
    cout << setw(0) << setfill('.') << "ITCS 2530 - Programming Assignment for week #3 " << setw(0) << setfill('.') << "" << endl;
    cout << setw(75) << setfill('.') << "." << endl;
    cout << "\n" << endl;

    //variables
    string UserInput;
    string Fragile;
    string Dest;

    double Total;
    double InvoiceTotal = 0;
    double Shipping{};
    
    // asking the user for the item
    cout << "Please enter the item name (no spaces):.....................:";
    cin >> UserInput;
    cout << "Is the item fragile? (y=yes/n=no).....................:"; //asking user if the item is fragile
    cin >> Fragile;

    if (Fragile.compare("Y") == 0 || Fragile.compare("y") == 0 || Fragile.compare("N") == 0 || Fragile.compare("n") == 0)
    {
        //user input
        cout << "Please enter your order total .....................:";
        cin >> Total;
        cout << "Please enter destination .(usa/can/aus) .....................:";
        cin >> Dest;
        cout << "\n" << endl;

        if (Fragile.compare("Y") == 0 || Fragile.compare("y") == 0)
        {
            //if fragile charge 2$
            InvoiceTotal += 2;
        }
        //destination charges according to country 
            if (Dest == "usa")
            {
                if (Total < 50.00)
                    Shipping = Shipping + 6.00;
                else if (Total > 50.1 || Total < 100.00)
                    Shipping = Shipping + 9.00;
                else if (Total > 100.1 || Total < 150)
                    Shipping = Shipping + 12.00;
                else
                    Shipping = 0.0;
            }
            if (Dest == "can")
            {
                if (Total < 50.00)
                    Shipping = Shipping + 8.00;
                else if (Total > 50.00 || Total < 100.01)
                    Shipping = Shipping + 12.00;
                else if (Total > 100.00 || Total < 150.01)
                    Shipping = Shipping + 15.00;
                else
                    Shipping = 0.0;
            }
            if (Dest == "aus")
            {
                if (Total < 50.00)
                    Shipping = Shipping + 10.00;
                else if (Total > 50.00 || Total < 100.01)
                    Shipping = Shipping + 14.00;
                else if (Total > 100.00 || Total < 150.01)
                    Shipping = Shipping + 17.00;
                else
                    Shipping = 0.0;
            }
            // comment for github
            if (Dest == "Pluto")
            {
                if (Total < 50.00)
                    Shipping = Shipping + 10000000000;
                else if (Total > 50.00 || Total < 100.01)
                    Shipping = Shipping + 100000000000;
                else if (Total > 100.00 || Total < 150.01)
                    Shipping = Shipping + 100000000000;
                else
                    Shipping = 100000000000000;
            }


            
            
            //to store output in a file

                freopen("Order.txt", "a+", stdout);

                // final output and calculation
                cout << "Your Item is .....................:" << UserInput << endl;
                cout << "Your shipping cost is .....................:$" << Shipping << endl;
                cout << "You are shipping to .....................:" << Dest << endl;
                cout << "Your total shipping costs are .....................:$" << Shipping+Total << endl;
                cout << "\n" << endl;
                cout << "---------------------------------------------------Thank You!" << endl;
            }
        //if user input is other than specified  
    else
    {
        cout << "Invalid entry, exiting..." << endl;
    }

    // to end program when any key is pressed
    system("pause");

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
