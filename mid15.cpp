#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    string roll, name;      //Declares string variable with labels : roll, name

    float subject_1, subject_2, subject_3, percentage, marks_obtained;        //Declares integer variable with the labels : subject_1, subject_2, subject_3, percentage, marks_obtained

    cout<<"Enter your roll: "<<endl;    //Prompts the user for number

    cin>>roll;        //Takes user input and stores it in variable

    cout<<"Enter your name: "<<endl;        //Prompts the user for number

    cin>>name;        //Takes user input and stores it in variable

    cout<<"Enter the marks of three subjects: "<<endl;      //Prompts the user for number

    cin>>subject_1;       //Takes user input and stores it in variable

    cin>>subject_2;       //Takes user input and stores it in variable

    cin>>subject_3;       //Takes user input and stores it in variable

    marks_obtained=subject_1+subject_2+subject_3;     //Formula to conduct the operation

    percentage=(marks_obtained/300)*100;        //Formula to conduct the operation

    cout<<"Your roll: "<<roll<<endl;        //Displays the roll to the user

    cout<<"Your name: "<<name<<endl;        //Displays the name to the user

    cout<<"Subject one: "<<subject_1<<endl;     //Displays the number to the user

    cout<<"Subject two: "<<subject_2<<endl;     //Displays the number to the user

    cout<<"Subject three: "<<subject_3<<endl;       //Displays the number to the user

    cout<<"Total: "<<marks_obtained<<endl;      //Displays the number to the user

    cout<<"Percentage: "<<percentage<<endl;     //Displays the number to the user

    if (percentage>70)      //Checks whether the percentage is greater than 70
    {
        cout<<"First division"<<endl;       //Displays the number to the user
    }

    else if (percentage>50)     //Checks whether the percentage is greater than 50
    {
        cout<<"Second division"<<endl;      //Displays the number to the user
    }

    else        //Checks whether the percentage is less than 50
    {
        cout<<"Third division"<<endl;       //Displays the number to the user
    }

return 0;       //End of program
} //End of main body

