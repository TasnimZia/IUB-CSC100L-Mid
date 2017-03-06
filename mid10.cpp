#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    string forename, surname, year_of_birth;        //Declares string variable with label : forename, surname, year_of_birth

    cout<<"Please enter your forename: "<<endl;     //Prompts the user for a forename

    cin>>forename;       //Takes user input and stores it in variable

    cout<<"Please enter your surname: "<<endl;      //Prompts the user for a surname

    cin>>surname;        //Takes user input and stores it in variable

    cout<<"Please enter your year of birth: "<<endl;        //Prompts the user for a year of birth

    cin>>year_of_birth;      //Takes user input and stores it in variable

    cout<<forename<<" "<<surname<<" "<<year_of_birth<<endl;     //Displays the forename, surname, year of birth to the user

    return 0;       //End of program
} //End of main body

