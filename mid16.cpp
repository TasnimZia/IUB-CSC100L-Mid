#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    int a, b, c, n;     //Declares integer variable with the label: a, b, c, n

    cout<<"Enter the value of a: "<<endl;       //Prompts the user for number

    cin>>a;     //Takes user input and stores it in variable

    cout<<"Enter the value of b: "<<endl;       //Prompts the user for number

    cin>>b;     //Takes user input and stores it in variable

    cout<<"Enter the value of c: "<<endl;       //Prompts the user for number

    cin>>c;     //Takes user input and stores it in variable

    n=(b^2)-4*a*c;      //Formula to solve the operation

    if (n==0)       //Checks whether the answer is equal to 0
    {
        cout<<"equal roots"<<endl;      //Displays the nature of roots to the user
    }

    else if (n>=0)      //Checks whether the answer is greater than or equal to 0
    {
        cout<<"Real roots"<<endl;       //Displays the nature of roots to the user
    }

    else if (n<0)             //Checks whether the answer is less than 0
    {
        cout<<"Imaginary roots"<<endl;      //Displays the nature of roots to the user
    }
    else        //Checks whether the answer is greater than 0
    {
        cout<<"Unequal roots"<<endl;       //Displays the nature of roots to the user
    }

return 0;       //End of program
} //End of main body
