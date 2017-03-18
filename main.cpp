#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double windChill(double wind, double temp);

double windChill(double v, double t);


int main()
{

    double windSpeed;
    double temperature;

    cout << "Enter wind speed in miles per hour: " << endl;
    cin >> windSpeed;

    cout << "Enter temperature in degree fahrenheit: " << endl;
    cin >> temperature;

    cout << "Current temperature: " << temperature << "F" << endl;
    cout << "Windchill factor: " << setprecision(4) << windChill(windSpeed, temperature) << "F" << endl;


}

// Calculate windChill given windSpeed and temperature
double windChill(double v, double t)
{
    double w;

    w = 35.74 + 0.6215 * t-35.75* pow( v, 0.16)  + 0.4275 * t * pow(v, 0.16);


    return w;

}