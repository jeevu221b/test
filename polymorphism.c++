#include <cstring>
#include <iostream>
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

class Volvo : public Car
{
public:
    string model = "Turbo";
    int release = 1999;
    string engine = "1000cc";
    char models[2][10] = {"X90", "X91"};
};

class X91 : public Volvo
{
public:
    int release = 2001;
    string engine = "1023cc";
    int seat = 3;
};
class X90 : public Volvo
{
public:
    int release = 2000;
    string engine = "10101cc";
    int seat = 2;
};

class Ferrari : public Car
{
public:
    string model = "Non-Turbo";
    int release = 1997;
    string engine = "1003cc";
    char models[2][10] = {"F90", "F91"};
};

class F90 : public Ferrari
{
public:
    int release = 2001;
    string engine = "10103cc";
    int seat = 1;
};
class F91 : public Ferrari
{
public:
    int release = 2002;
    string engine = "10104cc";
    int seat = 5;
};

void getFeatures(X90 featureList, string feature)
{
    string result = feature + ": " + featureList[feature];
    return result;
}

int main()
{
    int i;
    bool match = false;
    Car obj;
    Volvo volvocar;
    Ferrari ferraricar;
    string a = "volvo", b = "ferrari";
    string model;
    int count = 0;
    string feature;
    string cars = "test";
    string engine = "engine";
    string seat = "seat";
    string release = "release";
    X90 x90model;
    X91 x91model;
    F90 f90model;
    F91 f91model;
    cout << getFeatures(x90model, "engine");
    cout
        << " Which car are you interested in?\n";
    // // cout << sizeof(obj.brands) / 10 << "size";
    // for (i = 0; i < sizeof(obj.brands) / 10; i++)
    // {
    //     cout << obj.brands[i] << "\n";
    // }
    // cin >> cars;
    // for (i = 0; i < sizeof(obj.brands) / 10; i++)
    // {
    //     if (obj.brands[i] == cars)
    //     {
    //         match = true;
    //     }
    // }

    // if (match == true)
    // {

    //     // For volvo

    //     if (cars == a)
    //     {

    //         cout << "Good choice!, We have these models available in" << a << "\n";
    //         for (i = 0; i < 2; i++)
    //         {
    //             cout << "\n"
    //                  << volvocar.models[i];
    //         }
    //         cout << "\n"
    //              << "Which model would you like to know about?"
    //              << "\n";
    //         cin >> model;

    //         if (model == "X90")
    //         {
    //             count = 1;
    //             cout << "what feature of " << model << "would you like to know?"
    //                  << "\n";
    //             cin >> feature;
    //             if (feature == engine)
    //             {
    //                 cout << x90model.engine << "\n";
    //             }
    //             else if (feature == seat)
    //             {
    //                 cout << x90model.seat << "\n";
    //             }
    //             else if (feature == release)
    //             {
    //                 cout << x90model.release << "\n";
    //             }
    //         }

    //         else if (model == "X91")
    //         {
    //             count = 1;
    //             cout << "what feature of " << model << "would you like to know?"
    //                  << "\n";
    //             cin >> feature;
    //             if (feature == engine)
    //             {
    //                 cout << x91model.engine << "\n";
    //             }
    //             else if (feature == seat)
    //             {
    //                 cout << x91model.seat << "\n";
    //             }
    //             else if (feature == release)
    //             {
    //                 cout << x91model.release << "\n";
    //             }
    //         }
    //     }

    //     // For ferrari

    //     if (cars == b)
    //     {
    //         cout << "Good choice!, We have these models available in ferrari"
    //              << "\n";
    //         for (i = 0; i < 2; i++)
    //         {
    //             cout << "\n"
    //                  << ferraricar.models[i];
    //         }
    //         cout << "\n"
    //              << "Which model would you like to know about?"
    //              << "\n";
    //         cin >> model;

    //         if (model == "F90")
    //         {
    //             count = 1;
    //             cout << "what feature of " << model << "would you like to know?"
    //                  << "\n";
    //             cin >> feature;
    //             if (feature == engine)
    //             {
    //                 cout << f90model.engine << "\n";
    //             }
    //             else if (feature == seat)
    //             {
    //                 cout << f90model.seat << "\n";
    //             }
    //             else if (feature == release)
    //             {
    //                 cout << f90model.release << "\n";
    //             }
    //         }

    //         else if (model == "F91")
    //         {
    //             count = 1;
    //             cout << "what feature of " << model << "would you like to know?"
    //                  << "\n";
    //             cin >> feature;
    //             if (feature == engine)
    //             {
    //                 cout << f91model.engine << "\n";
    //             }
    //             else if (feature == seat)
    //             {
    //                 cout << f91model.seat << "\n";
    //             }
    //             else if (feature == release)
    //             {
    //                 cout << f91model.release << "\n";
    //             }
    //         }
    //     }

    //     if (count == 0)
    //     {
    //         cout << "Sorry we don't have this model available";
    //     }
    // }
    // else if (match == false)
    // {
    //     cout << "Sorry we don't have this car available";
    // }

    return 0;
}
