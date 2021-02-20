#include <iostream>

using namespace std;

void wear_sunglasses();
void wear_windbreaker();
void get_umbrella();
void wear_raincoat();

enum weather
{
    sunny,
    windy,
    cloudy,
    rain,
} weather_outside;

int main()
{

    weather_outside = sunny; // change accordingly

    switch (weather_outside)
    {
    case sunny:
        wear_sunglasses();
        break;
    case windy:
        wear_windbreaker();
        break;
    case cloudy:
        get_umbrella();
        break;
    case rain:
        get_umbrella();
        wear_raincoat();
        break;
    }

    return 0;
}

void wear_sunglasses()
{
    cout << "Wear sunglasses\n";
}

void wear_windbreaker()
{
    cout << "wear windbreaker\n";
}

void get_umbrella()
{
    cout << "Take umbrella with you\n";
}

void wear_raincoat()
{
    cout << "wear raincoat\n";
}
