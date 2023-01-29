/***********************************************************************************/
/*Author: Hadia Majed                                                              */
/*Program: Word On The Street.cpp                                                  */
/*Date: May 5, 2021                                                                */
/*Purpose: This program determines the timeslots for the radio listeners.          */
/*Version: 1.0                                                                     */
/***********************************************************************************/


#include "Customer.h"
#include "Service.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//*****************************************MAIN*********************************************************/ 
int main()
{
    //TEST DATA 
    //business variables
    string radiobroadcastname; "Word On The Street"

        //Phone
        ; string phone; "516-445-6789"
        ; cout << phone << "516-445-6789" << endl;
    
    //Address
    string address; "332 Mulberry Lane"


        //Customer Information
        //Parallel Arrays
        ; const int CSIZE = 3;
        int cindex = -1;

        string customers[3] = { "Jennie", "Irene", "Lia" };
        cout << customers[0];

        string phone[3] = { "516-995-8764", "516-763-9876", "516-665-7621" };
        cout << phone[0];

        string address[3] = { "22 Cavern Lane", "55 Spring Lane", "75 Lotus Lane" };
        cout << address[0];

        string ID[3] = { "A647391", "G852083", "D490315" };
        cout << ID[0];

        string pin[3] = { "5102", "4864", "8750" };
        cout << pin[0];

        string creditcard[3] = { "6451-8994-6554-7802", "9043-7660-6880-2031", "8036-7558-6008-1023" };
        cout << creditcard[0];

        string email[3] = { "Jennxpink@gmail.com", "Irene2red@gmail.com", "Lia4itz@gmail.com" };
        cout << email[0];

        return 0;


        //View Available Time Slots 
        string slot[3] = { "Morning", "Afternoon","Evening" };
        cout << slot[0];
        return 0;
}
//*****************************************END OF MAIN**************************************************/ 

//*****************************************Welcome******************************************************/
//void welcome()
{
    string radiobroadcastname = "Word On The Street";
    cout << "Welcome to " << radiobroadcastname << "system!\n";
    return 0;
}
//*****************************************END OF WELCOME***********************************************/