#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    float c;

    cout<<"Please enter a temperature: "<<endl;      //Prompts the user for number

    cin>>c;      //Takes user input and stores it in variable

    if (c<0)
    {
        cout<<"Freezing weather"<<endl;     //Displays the message to the user
    }

    else if (c<=10)
    {
        cout<<"Very cold weather"<<endl;        //Displays the message to the user
    }


    else if (c<=20)
    {
        cout<<"Cold weather"<<endl;     //Displays the message to the user
    }


    else if (c<=30)
    {
        cout<<"Normal"<<endl;       //Displays the message to the user
    }

    else if (c<=40)
    {
        cout<<"It's hot"<<endl;     //Displays the message to the user
    }

    else
    {
        cout<<"Very hot"<<endl;     //Displays the message to the user
    }


return 0;       //End of program
} //End of main body
