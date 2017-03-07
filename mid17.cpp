#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    float c;        //Declares float variable with the label: c

    cout<<"Please enter a temperature: "<<endl;      //Prompts the user for number

    cin>>c;      //Takes user input and stores it in variable

    if (c<0)        //Checks whether the temperature is less than 0
    {
        cout<<"Freezing weather"<<endl;     //Displays the message to the user
    }

    else if (c<=10)     //Checks whether the temperature is less than or equal to 10
    {
        cout<<"Very cold weather"<<endl;        //Displays the message to the user
    }

    else if (c<=20)     //Checks whether the temperature is less than or equal to 20
    {
        cout<<"Cold weather"<<endl;     //Displays the message to the user
    }

    else if (c<=30)     //Checks whether the temperature is less than or equal to 30
    {
        cout<<"Normal"<<endl;       //Displays the message to the user
    }

    else if (c<=40)             //Checks whether the temperature is less than or equal to 40
    {
        cout<<"It's hot"<<endl;     //Displays the message to the user
    }

    else        //Checks whether the temperature is greater than 40
    {       
        cout<<"Very hot"<<endl;     //Displays the message to the user
    }


return 0;       //End of program
} //End of main body
