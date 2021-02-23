#include <iostream>

using namespace std;

int main ()
{


    int menuChoice;
    int age ;
    string car1 = " 1. Mercedes class S ";
    string car2 = " 2. BMW X5 ";
    string car3 = " 3. Opel Crossland ";
    string quit = " 4. Quit ";

     cout << "Welcome to rent a car CAR2GO \n"<< endl;
     cout <<"Please add your age :" << endl;
     cin >> age;

    if (age < 18)
        {

    cout << "You need a driving license to rent a car" << endl;
     return 0;
        }

    else {
            cout << "Choose one of the below cars "<< endl;
            }




    cout << car1 << endl;
    cout << car2 << endl;
    cout << car3 << endl;
    cout << quit << endl;


    cin >> menuChoice ;


    switch (menuChoice)
{


    case 1:
        if ( menuChoice == 1)
            cout << "You chose a Mercedes class S " << endl;
            cout <<  "Drive safe " << endl;
            break ;
    case 2:
        if (menuChoice == 2)
            cout << "You chose a BMW X5 " << endl;
            cout <<  "Drive safe " << endl;
            break ;
    case 3:
        if (menuChoice ==3)
            cout << "You chose a Opel Crossland " << endl;
            cout <<  "Drive safe " << endl;
        break ;
    case 4:
        if (menuChoice == 4)
            return  0;
            }




}







