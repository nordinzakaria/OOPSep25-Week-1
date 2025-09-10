#include <iostream>
using namespace std;

// declare a global array
float temperature[10];

float calcAverage()
{
    float avg = 0;
    for (int i = 0; i < 10; i++) {
        avg += temperature[i];
    }
    avg /= 10;

    return avg;
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
        cout << "4) Exit" << endl;

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
        else {
            break;
        }
    }

    return 0;
}
