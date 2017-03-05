#include <iostream>     //This includes the InputOutput library

using namespace std;

int main()     //This is the start of a function
{    //Start of main body

    cout<<"What is your name?"<<endl;       //Prompts one user for a name

    string user_one;        //Declares string variable with label: user_one

    cin>>user_one;      //Takes user input and stores it in the variable

    cout<<"Hello "<<user_one<<endl;     //Declares the name to the user



    cout<<"What is your name?"<<endl;       //Prompts another user for a name

    string user_two;        //Declares string variable with label: user_two

    cin>>user_two;      //Takes user input and stores it in the variable

    cout<<"Hello "<<user_two<<endl;     //Declares the name to the user



    return 0;       //End of program

}   //End of main body
