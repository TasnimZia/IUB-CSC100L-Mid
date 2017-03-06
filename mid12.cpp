#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    int age;        //Declares integer variable with label : age

    cout<<"Please enter your age: "<<endl;       //Prompts the user for a number

    cin>>age;        //Takes user input and stores it in variable

    if (age<18)
    {
        cout<<"Sorry! You can't vote."<<endl;       //Displays the answer to the user
    }

    else
    {
        cout<<"Congrats! You can vote!"<<endl;      //Displays the answer to the user
    }

return 0;        //End of program
} //End of main body


