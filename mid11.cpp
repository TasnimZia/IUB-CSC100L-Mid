#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    int first_number, second_number;        //Declares integer variables with label : first_number, second_number

    cout<<"Please enter a number: "<<endl;      //Prompts the user for number

    cin>>first_number;      //Takes user input and stores it in variable

    cout<<"Please enter another number: "<<endl;        //Prompts the user for number

    cin>>second_number;     //Takes user input and stores it in variable

    if (first_number==second_number)        //Checks whether the numbers are equal
    {
        cout<<"Your number is equal"<<endl;     //Displays the result to the user
    }

    else        //Checks whether the numbers aren't equal
    {
        cout<<"Your number is not equal"<<endl;     //Displays the result to the user
    }

    return 0;        //End of program
} //End of main body

