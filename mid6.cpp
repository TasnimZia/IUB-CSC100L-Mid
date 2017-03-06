#include <iostream>      //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{   //Start of main body

    int divisor, dividend, quotient, remainder;     //Declares integer variable with label : divisor, dividend, quotient, remainder

    cout<<"Please enter a dividend: "<<endl;       //Prompts the user for number

    cin>>dividend;         //Takes user input and stores it in variable

    cout<<"Please enter a divisor: "<<endl;        //Prompts the user for number

    cin>>divisor;      //Takes user input and stores it in variable

    quotient=dividend/divisor;      //Equation to solve the operation

    remainder=dividend%divisor;

    cout<<"The quotient is "<<quotient<<endl;        //Prompts the user for number

    cout<<"The remainder is "<<remainder<<endl;      //Prompts the user for number

    return 0;        //End of program
} //End of main body


