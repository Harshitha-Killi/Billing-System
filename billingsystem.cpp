//header files
#include<iostream>
#include<fstream> // File handling operations

using namespace std;

class shopping
{
    private: //private scope
        int pcode; //declaring variables
        float price;
        float discount;
        string pname;

    public: //public scope
    void menu(); //declaring functions - we will create definitions later
    void administrator();
    void buyer();
    void add();
    void edit();
    void remove();
    void list();
    void receipt();

}; //; at end of class

//menu functon by mentioning class name and scope resolution operator
void shopping :: menu()  // :: scope resolution operator
{
    m: // Label for goto function at the beginning of menu function
    
    int choice;
    string email; // login credentials
    string password;

    // first we have to display supermarket main menu and then we can display administrator, buyer and stuff.

    cout<<"/t/t/t/t/t___________________________\n ";
    cout<<"/t/t/t/t/t                           \n ";
    cout<<"/t/t/t/t/t   SUPERMARKET MAIN MENU   \n ";
    cout<<"/t/t/t/t/t                           \n ";
    cout<<"/t/t/t/t/t___________________________\n ";
    cout<<"/t/t/t/t/t                           \n ";
    cout<<"/t/t/t/t/t |  1) ADMINISTRATOR   |   \n ";
    cout<<"/t/t/t/t/t |                     |   \n ";
    cout<<"/t/t/t/t/t |  2) BUYER           |   \n ";
    cout<<"/t/t/t/t/t |                     |   \n ";
    cout<<"/t/t/t/t/t |  3) EXIT            |   \n ";
    cout<<"/t/t/t/t/t |                     |   \n ";
    cout<<"/t/t/t/t/t Please Select!";

    cin>>choice; //choice input

    switch(choice)
    {
        case 1: //Administrator Case
            cout<<"/t/t/t Please Login \n";
            cout<<"/t/t/t Enter Email: \n";
            cin>>email;
            cout<<"/t/t/t Enter password: \n";
            cin>>password;

            // Admin details are unique. Only if they type these details, they will be logged in.
            if(email== admin@gmail.com && password== Admin_4321) 
                adminstrator(); 
            // If correct details are passed, tey enter the administrator function block.

            else
                cout<<"Invalid username/password";

            break; //To end the case 1

        
        case 2:
            buyer();// We will just call buyer function.

        
        case 3:
            exit(0); // It means successful termination of the program.

        
        default: //If a person selects anyother option.
            cout<<"Please select from the given choices!";


    }

    goto m;
    // goto function helps in jumping. Helps in going back to the main function again
}


void shopping :: administrator() // Next function definition
{
    m: //label for goto
  
   int choice;
   cout<<"\n\n\n\t\t\t ADMINISTRATOR MENU";
   cout<<"\n\t\t\t|______1)Add the product______|";
   cout<<"\n\t\t\t|                             |";
   cout<<"\n\t\t\t|_____2)Modify the product____|";
   cout<<"\n\t\t\t|                             |";
   cout<<"\n\t\t\t|_____3)Delete the product____|";
   cout<<"\n\t\t\t|                             |";
   cout<<"\n\t\t\t|_____4)Back to main menu_____|";
   cout<<"\n\t\t\t|                             |";

   cout<<"\n\n\t Please enter your choice ";
   cin>>choice;

   switch(choice)
   {
    case 1:
        add(); // addition of new products by administrator.
        break;

    case 2:
        edit(); // changes in present products made by administrator.
        break;

    case 3:
        remove();  // removal of previous products by administrator.
        break;

    case 4:
        menu();
        break;

    default :
        cout<<"Invalid choice!";
   }

   goto m;
}


void shopping :: buyer()
{
   m: //label
   int choice;

   cout<<"\n\n\n\t\t\t CUSTOMER ";
   cout<<"\n                       ";
   cout<<"\n\t\t\t1)Buy the product";
   cout<<"\n                       ";
   cout<<"\n\t\t\t|2)Go back       ";
   cout<<"\n                       ";
   cout<<"\n\t Please enter your choice ";

   cin>>choice;

   switch(choice)
   {
     case 1:
         receipt(); // Inside the receipt function, all the operations of buyers will take place.
         break;

     case 2:
         menu();
         break;

     default:
        cout<<"Please enter a valid choice!";

   }

   goto m;


}
