#include <iostream>
#include <vector>
using namespace std;

// declare global variables

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


int main()
{
    cout << "Enter 10 temperature data";
    for (int i = 0; i < 10; i++)
    {
        cin >> temperature[i];
    }


    while (true) {
        cout << "1) Calculate min and max" << endl;
        cout << "2) Calculate avg" << endl;
        cout << "3) Re-read data" << endl;
        cout << "4) Get temp higher than threshold" << endl;

        cout << "5) Exit" << endl;

        int option;
        cin >> option;
        if (option == 1) {
            float min = FLT_MAX;
            for (int i = 0; i < 10; i++)
            {
                if (temperature[i] < min)
                    min = temperature[i];
            }

            // calc max
        }
        else if (option == 2) {
            float avg = calcAverage();
        }
        else if (option == 3) {
            // read data again
        }
        else if (option == 4) {
            cout << "Enter threshold" << endl;
            float threshold;
            cin >> threshold;

            // call gethighertemp
            vector<float> hightemp = gethighertemperature(threshold);
            for (int j = 0; j < hightemp.size(); j++)
                cout << hightemp[j] << endl;
        }
        else {
            break;
        }
    }

    return 0;
}
