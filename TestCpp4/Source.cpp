#include <iostream>
#include <vector>
using namespace std;

#include "SensorReading.h"

class SensorData // to group together global + functions
{
    public:

    SensorReading temperature[10]; 

    float calcAverage()
    {
        float avg = 0;
        for (int i = 0; i < 10; i++) {
            avg += temperature[i].val;
        }
        avg /= 10;

        return avg;
    }

    vector<float> getHigherTemperature(float threshold)
    {
        vector<float> results;

        for (int i = 0; i < 10; i++)
        {
            if (temperature[i].val > threshold)
                results.push_back(temperature[i].val);
        }

        return results;
    }

    void read() 
    {
        cout << "Enter 10 temperature data";
        for (int i = 0; i < 10; i++)
        {
            cin >> temperature[i].val >> temperature[i].time;
        }
    }

};

int main()
{
    // instantiate objects
    SensorData kitchen;
    SensorData room;

    kitchen.read();
    room.read();

    float result = kitchen.calcAverage();
    cout << "average is " << result;

    return 0;
}
