#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    float number_one, number_two, number_three;         //Declares float variable with label : number_one, number_two, number_three

    cout<<"Enter first number: "<<endl;     //Prompts the user for number

    cin>>number_one;          //Takes user input and stores it in variable

    cout<<"Enter second number: "<<endl;        //Prompts the user for number

    cin>>number_two;          //Takes user input and stores it in variable

    cout<<"Enter third number: "<<endl;     //Prompts the user for number

    cin>>number_three;        //Takes user input and stores it in variable

    cout<<endl;      //Creates one line gap

    if (number_one>number_two)      //Checks whether number_one is greater than number_two
    {
        if (number_one>number_three)        //Checks whether number_one is greater than number_three
        {
            cout<<number_one<<" is the largest number."<<endl;      //Displays the number to the user
        }
    }
    else if (number_two>number_three)       //Checks whether number_two is greater than number_three
    {
        if (number_two>number_one)      //Checks whether number_two is greater than number_one
        {
            cout<<number_two<<" is the largest number."<<endl;      //Displays the number to the user
        }
    }
    else        //Checks whether number_three is greater than the two numbers
    {
        cout<<number_three<<" is the largest number."<<endl;        //Displays the number to the user
    }

return 0;       //End of program
} //End of main body
