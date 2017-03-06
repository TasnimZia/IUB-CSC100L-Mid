#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    char grade;         //Declares character variable with label : grade

    cout<<"Enter your grade: "<<endl;         //Prompts the user for a grade

    cin>>grade;     //Takes user input and stores it in variable

    if (grade=='e')
    {
        cout<<"Excellent!"<<endl;       //Displays the equivalent description of the grade to the user
    }

    else if (grade=='v')
    {
        cout<<"Very good!"<<endl;         //Displays the equivalent description of the grade to the user
    }

    else if (grade=='g')
    {
        cout<<"Good"<<endl;           //Displays the equivalent description of the grade to the user
    }
    else if (grade=='a')
    {
        cout<<"Average"<<endl;        //Displays the equivalent description of the grade to the user
    }

    else if (grade=='f')
    {
        cout<<"Fail"<<endl;       //Displays the equivalent description of the grade to the user
    }

    return 0;        //End of program
} //End of main body

