#include <iostream>     //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{ //Start of main body

    float x, y;     //Declares float variable with label : x, y


    cout<<"Please enter your x-coordinate of point A: "<<endl;

    cin>>x;     //Takes user input and stores it in variable

    cout<<"Please enter your y-coordinate of point A: "<<endl;

    cin>>y;     //Takes user input and stores it in variable

    cout<<endl;     //Creates one line gap

    if  (x==0)
    {
        if (y==0)
        {
            cout<<"Point A lies in the origin."<<endl;
        }
    }

    else if (x>0)    //Checks whether the x-coordinate is greater than 0
    {
        if (y>0)        //Checks whether the y-coordinate is greater than 0
        {
            cout<<"Point A lies in the 1st quadrant."<<endl;         //Displays the quadrant to the user
        }
        else        //Checks whether both the quadrants are less than 0
        {
            cout<<"Point A lies in the 4th quadrant."<<endl;        //Displays the quadrant to the user
        }

    }

    else        //Assumes x is negative and checks why
    {
        if (y<0)        //Checks whether y-coordinate is less than 0
        {
            cout<<"Point A lies in the 3rd quadrant."<<endl;        //Displays the quadrant to the user
        }
        else        //Checks whether y-coordinate is greater than 0
        {
            cout<<"Point A lies in the 2nd quadrant."<<endl;        //Displays the quadrant to the user
        }
    }



 return 0;       //End of program
} //End of main body
