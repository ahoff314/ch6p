#include <iostream>

using namespace std;

int windChill(int windChill);

void userInput(int windSpeed, int temperature) {

    cout << "Enter wind speed in miles per hour: " << endl;

    cin >> windSpeed;

    cout << "Enter temperature in degree Fahrenheit: " << endl;

    cin >> temperature;

}

int windChill(){

    int windChill;

    windChill = 35.74 + 0.6215 * userInput(temperature)-35.75*windSpeed0.16  + 0.4275 * temperature *windSpeed0.16

    return windChill;
}

int main() {

    cout << "Current temperature: " << temperature << "F" << endl;
    cout << "Windchill factor: " << windChill << "F" << endl;


    return 0;
}