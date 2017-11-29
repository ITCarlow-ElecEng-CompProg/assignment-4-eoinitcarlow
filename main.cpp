/*Eoin Finlay
 Ex 4 - Resistance of a wire
 20 Sep 2017*/

//Preprocessor Directives
#include <iostream>
#define PI 3.141592654
#include <math.h>
#include <iomanip>

using namespace std;

//Function Declarations
int main();
double res(double, double, double);

//Main Function
int main()
{
    //Variable Declarations
    double rad = 0, length = 0, resis = 0, resistance;
    //Setting Decimal precision
    cout << fixed;
    cout << setprecision(2);
    //While Loop to ensure value entered is greater than zero
    while (rad<=0)
    {
        cout << "\nEnter a value for radius greater than zero: ";
        cin >> rad;
    }
    //While Loop to ensure value entered is greater than zero
    while (length<=0)
    {
        cout << "\nEnter a value for length greater than zero: ";
        cin >> length;
    }
    //While Loop to ensure value entered is greater than zero
    while (resis<=0)
    {
        cout << "\nEnter a value for resistivity greater than zero: ";
        cin >> resis;
    }
    //Calling of a function
    resistance = res(rad, length, resis);
    //Displaying result to the user
    cout <<"\nResistance of wire: "<<resistance<<" ohms "<<endl;

    return 0;
}
//Res Function Header
double res(double rad, double length, double resis)
{
    //Variable Declarations
   double area, R;
    //Assigning Area to an equation
   area = (PI * pow(rad,2.0));
    //Assigning R to an equation
   R = resis * (length / area);
    //returning result of function back to Main Function
   return R;

}



