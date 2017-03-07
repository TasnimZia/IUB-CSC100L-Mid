#include <iostream>      //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{   //Start of main body

    string x;      //Declares string variable with label : x

    cout<<"Please enter a string: "<<endl;      //Prompts the user for number

    cin>>x;     //Takes user input and stores it in variable

   cout<<endl<<"outside integer"<<endl;

   int b=int (x);

   cout<<b<<endl;    //Displays the number to the user

return 0;       //End of program
} //End of main body
