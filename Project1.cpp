#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Declaring Variables
   
    float diameter  =0.0;
    float length    =0.0;
    float pieces    =0.0;
    float truckLimit=0.0;
    float density   =0.0;
    float weight    =0.0;
    float weight2   =0.0;
    float volume    =0.0;
    int   bundles   =0.0;
    density         =0.291;

    //Input & Output Questions
    cout << "Diameter of rebar in inches? ";
    cin >> diameter;
    cout << "Length of rebar in feet? ";
    cin >> length;
    cout << "How many pieces of rebar in a bundle? ";
    cin >> pieces;
    cout << "Truck's weight limit in pounds? ";
    cin >> truckLimit;
    
    //converting length in feet to length in inches
    
    length=length*12;
    
    //calculations
    
    volume  = (M_PI)*(pow(diameter/2,2))*(length);
    weight  = volume*density;
    weight2 = weight*pieces;
    bundles = truckLimit/weight2;
    
    //Output Results
    
    cout<<"One piece of rebar weighs "<<weight<<" pounds."<<endl;
    cout<<"This truck can carry "<<bundles<<" bundles of rebar."<<endl;
    
    return 0;
}

