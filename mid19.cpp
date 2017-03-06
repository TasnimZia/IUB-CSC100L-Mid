#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    int cost_price, selling_price, total;       //Declares integer variables with label : cost_price, selling_price, total

    cout<<"Enter the cost price: "<<endl;         //Prompts the user for a number

    cin>>cost_price;        //Takes user input and stores it in variable

    cout<<"Enter the selling price: "<<endl;          //Prompts the user for a number

    cin>>selling_price;     //Takes user input and stores it in variable

    total=selling_price-cost_price;     //Formula to conduct the operation

    if (cost_price<=selling_price)
    {
        cout<<"You made a profit of amount: "<<total<<endl;       //Displays the value to the user
    }

    else
    {
        cout<<"You made a loss of amount: "<<total<<endl;         //Displays the value to the user

    }

return 0;       //End of program
} //End of main body
