#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

void filling(vector <int> & array,int options) {
    for (int i = 0; i < options; i++) {
        int time;
        cin >> time;
        array.push_back(time);
    }
}

void removingZeros(string &number) {
    int length = number.length();
    for (int i = 0; i < length; i++) {
        if (number[i] != '0') {
            break;
        }
        if (number[i] == '0') {
           
            number.erase(i, 1);
        }
    }
}
int main()
{
    int options;
    cin >> options;
    
    vector <int> time;
    time.reserve(options);
    filling(time, options);

    int trainDeparture;
    cin >> trainDeparture;
    int trainDepartureInMinutes = 0;

    if (trainDeparture / 1000 == 0 && trainDeparture / 100 == 0 && trainDeparture / 10 == 0 && trainDeparture / 1 == 0) {
        trainDepartureInMinutes == 0;
    }
    else if (trainDeparture / 1000 == 0 && trainDeparture / 100 == 0 && trainDeparture / 10 == 0) {
        string number = to_string(trainDeparture);
        removingZeros(number);
        trainDepartureInMinutes = stoi(number);
    }
    else if (trainDeparture / 1000 == 0 && trainDeparture / 100 == 0) {
        string number = to_string(trainDeparture);
        removingZeros(number);
        trainDepartureInMinutes = stoi(number);;
    }
    else if (trainDeparture / 1000 == 0) {
        string number = to_string(trainDeparture);
        removingZeros(number);
        int temp = stoi(number);
        int hour = (temp / 100) * 60;
        int minutes = temp % 100;
        trainDepartureInMinutes += hour;
        trainDepartureInMinutes += minutes;
    }
    else {
        int hour = (trainDeparture / 100) * 60;
        int minutes = trainDeparture % 100;
        trainDepartureInMinutes += hour;
        trainDepartureInMinutes += minutes;

    }

    for (int i = 0; i < options; i++) {
        if (time[i] / 1000 == 0 && time[i] / 100 == 0 && time[i] / 10 == 0 && time[i]/1 == 0) {
            time[i] == 0;
        }
        else if (time[i] / 1000 == 0 && time[i] / 100 == 0 && time[i]/10 == 0) {
                string number = to_string(time[i]);
                removingZeros(number);
                time[i] = stoi(number);
        }
        else if (time[i] / 1000 == 0 && time[i] / 100 == 0) {
                string number = to_string(time[i]);
                removingZeros(number);
                time[i] = stoi(number);;
        }
        else if (time[i] / 1000 == 0) {
                string number = to_string(time[i]);
                removingZeros(number);
                int temp = stoi(number);
                int hour = (temp / 100) * 60;
                int minutes = temp % 100;
                time[i] = 0;
                time[i] += hour;
                time[i] += minutes;
        }
        else {
            int hour = (time[i] / 100)*60;
            int minutes = time[i] % 100;
            time[i] = 0;
            time[i] += hour;
            time[i] += minutes;

        }

    }

    int min = INT_MAX;
    int position = 0;

    for (int i = 0; i < options; i++) {
        int temp = abs(time[i] - trainDepartureInMinutes);
        if (temp < min) {
            min = temp;
            position = i + 1;
        }
    }
    cout << position << endl;
}

