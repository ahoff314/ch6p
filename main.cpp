#include <iostream>

using namespace std;

void userInput() {

    double windSpeed;
    double temperature;

    cout << "Enter wind speed in miles per hour: " << endl;

    cin >> windSpeed;

    cout << "Enter temperature in degree Fahrenheit: " << endl;

    cin >> temperature;

}

double windy(double windSpeed, double temperature){

    double windChill;

    windChill = 35.74 + 0.6215 * temperature-35.75*windSpeed*0.16  + 0.4275 * temperature *windSpeed*0.16;

    return 0;
}

int main(double windChill, double temperature) {

    cout << "Current temperature: " << temperature << "F" << endl;
    cout << "Windchill factor: " << windChill << "F" << endl;


    return 0;
}