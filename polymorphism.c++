#include <iostream>
#include <cstring>
using namespace std;
// Base class
class Vehicle
{
public:
    int wheels = 2;
    string engine = "500 cc";
    int headlight = 4;
    int backlight = 3;
    string transmission = "Auto";
    string type = "Car";
};

class Car : public Vehicle
{
public:
    int seats = 4;
    char brands[2][10] = {"volvo", "ferrari"};
    bool trunk = true;
};

class volvo : public Car
{
public:
    string model = "Turbo";
    int release = 1999;
    string engine = "1000cc";
};

class X90 : public volvo
{
public:
    int release = 2000;
    string engine = "10101cc";
    int seat = 2;
};

class ferrari : public Car
{
public:
    string model = "Non-Turbo";
    int release = 1997;
    string engine = "1003cc";
};

class F90 : public ferrari
{
public:
    int release = 2001;
    string engine = "10103cc";
    int seat = 1;
};

int main()
{
    int i;
    bool match = false;
    Car obj;
    string cars = "test";
    cout << " Which car are you interested in?\n";
    // cout << sizeof(obj.brands) / 10 << "size";
    for (i = 0; i < sizeof(obj.brands) / 10; i++)
    {
        cout << "\n"
             << i;
        cout << obj.brands[i];
    }
    cin >> cars;
    for (i = 0; i < sizeof(obj.brands); i++)
    {
        if (obj.brands[i] == cars)
        {
            cout << obj.brands[i];
            cout << "Good choice we have these models available in " << obj.brands[i];
            match = true;
        }
    }

    if (!match)
    {
        cout << "Sorry we don't  have this model available";
    }
    return 0;
}
