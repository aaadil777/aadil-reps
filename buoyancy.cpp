//  buoyancy.cpp
//
//  Created by Aadil Ali on 2/3/23.
//

#include <iostream>
using namespace std;

int main()
{
    //define variables of buoyant force equation
    double f = 0.0;
    double y = 62.4;
    double r = 0.0;
    const double pi = 3.14159265358979323846;
    double v = 0.0;
    char ans = 'Y';
    //This is the choice that controls the looping continuation or termination double
    do // ask user in order to compute for f
    {
        //ask user for radius and volume
        cout << "Hi my job is to help calculate buoyant force. please enter some radius to help calculate volume and buoyant force: \n" <<endl;
        cin >> r;
        // find volume and buoyant force
        //define volume of sphere
        v = ((4/3)*(pi)*(r*r*r));
        //define buoyant force equation
        f =(v*y);
        // print the result
        if  (f>=62.4)
        {
            cout << "The buoyant force of an object with specific gravity in lb/ft3 is: " << y << "and radius in feet: " << r << "so volume of the sphere of units feet cubed must be: " << v << "therefore buoyant force in Newtons must be:  " << f << endl;
        }
        else
        {
            cout << "Sorry the object sinks! I wish it could float\n" << endl;
            return 0;
        }
        cout << "Do you wish to compute for buoyant force for a different sphere again? (click 1 to compute again or 0 to end): " <<endl;
        cin >> ans;
    } 
    while ((ans == 'Y') || (ans == 'y'));
    {        //prompt the user
        
    }
return 0;
}
