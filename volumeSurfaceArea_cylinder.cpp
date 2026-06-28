#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    float r, h, s_a, v;

    cout << "Please Enter the Radius of the cylinder: ";
    cin >> r;

    cout << "Please enter the height of the cylinder: ";
    cin >> h;

    v = M_PI * pow(r,2) * h;
    s_a = 2 * M_PI * r * h  + 2 * M_PI * pow(r,2);

    cout << fixed << setprecision(2);

    cout << "With " << r << " units is the radius, " << "while " << h << " units is the height, therefore the correspoding volume and surface area of the given cylinder is " << v << " cubic units " << s_a << " squared units.";


    getch();
    return (0);
}