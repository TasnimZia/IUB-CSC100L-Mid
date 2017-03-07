#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    int hour, minute, total_minutes;        //Declares integer variable with label : hour, minute, total_minutes

    cout<<"Hours: "<<endl;      //Prompts the user for number

    cin>>hour;      //Takes user input and stores it in variable

    cout<<"Minutes: "<<endl;        //Prompts the user for number

    cin>>minute;        //Takes user input and stores it in variable

    total_minutes=(hour*60)+minute;     //Formula to conduct the operation

    cout<<"Total minutes: "<<total_minutes<<endl;       //Displays the number to the user

return 0;       //End of program
} //End of main body

