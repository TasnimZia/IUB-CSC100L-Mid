#include <iostream>     //This includes the InputOutput library

using namespace std;

int main()      //This is the main function
{   //Start of main body

    cout<<"What is your name?"<<endl;       //Prompts the user for name

    string name;        //Declares string variable with label: name

    cin>>name;      //Takes user input and stores it in variable

    cout<<"What is your year of birth?"<<endl;      //Prompts the user for the year of birth

    string year_of_birth;       //Declares string variable with label: year_of_birth

    cin>>year_of_birth;     //Takes user input and stores it in variable

    cout<<"What is your number?"<<endl;     //Prompts the user for number

    string number;      //Declares string variable with label: number

    cin>>number;         //Takes user input and stores it in variable

    cout<<"Name: "<<name<<endl;          //Displays the name to the user

    cout<<"YOB: "<<year_of_birth<<endl;      //Displays the year of birth to the user

    cout<<"Number: "<<number<<endl;      //Displays the number to the user


    return 0;       //End of program

}   //End of main body
