#include <iostream>
#include <vector>
using namespace std;

class SensorData // to group together global + functions
{
    public:

    float temperature[10]; // 2 locations

    float calcAverage()
    {
        float avg = 0;
        for (int i = 0; i < 10; i++) {
            avg += temperature[i];
        }
        avg /= 10;

        return avg;
    }

    vector<float> gethighertemperature(float threshold)
    {
        vector<float> results;

        for (int i = 0; i < 10; i++)
        {
            if (temperature[i] > threshold)
                results.push_back(temperature[i]);
        }

        return results;
    }
};

int main()
{
    // instantiate objects
    SensorData kitchen;
    SensorData room;


    cout << "Enter 10 temperature data";
    for (int i = 0; i < 10; i++)
    {
        cin >> kitchen.temperature[i];
    }



    return 0;
}
