#include <iostream>     //This includes the InputOutput library

using namespace std;

int main()      //This is the main function
{   //Start of main function
    double pi, radius, volume;     //Declares integer variable with label : pi, radius, circumference, area

    pi=3.14159;     //Declaring the value of pi

    cout<<"Please enter the value of the radius:"<<endl;		//Prompts the user for radius

    cin>>radius;		//Takes user input and stores it in variable

    volume=(4/3)*pi*radius*radius*radius;		//This is the equation of the volume of sphere

    cout<<"The volume of the sphere is "<<volume<<endl;		//Displays the volume to the user

    return 0; 		//End of program


}	//End of main
