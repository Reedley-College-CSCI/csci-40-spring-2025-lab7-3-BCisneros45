#include <iostream>
#include <fstream>
using namespace std;

// Bryan Cisneros


// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.
struct TemperatureRecord {
    int day;
    int temperature;

};

// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord records[], int size); // TODO: Fix the parameters
void printTemperatures(const TemperatureRecord records[], int size);
TemperatureRecord findMin(const TemperatureRecord records[], int size);
TemperatureRecord findMax(const TemperatureRecord records[], int size);
double findAverage(const TemperatureRecord records[], int size);

int main() {
    // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    TemperatureRecord records[MAX_DAYS];
    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file
    readTemperatures(records, size);
    // TODO: Step 4 - Print the temperatures
    printTemperatures(records, size);
    // TODO: Step 5 - Compute and display min, max, and average temperature
    TemperatureRecord minRecord = findMin(records, size);
    TemperatureRecord maxRecord = findMax(records, size);
    double avgTemperature = findAverage(records, size);

    cout << "Minimum Temperature: Day " << minRecord.day << ", Temperature " << minRecord.temperature << endl;
    cout << "Maximum Temperature: Day " << maxRecord.day << ", Temperature " << maxRecord.temperature << endl;
    cout << "Average Temperature: " << avgTemperature << endl;

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array
void readTemperatures(TemperatureRecord records[], int& size) {
    ifstream inputFile("temps.txt");
    if (!inputFile) {
        cerr << "Could not open file." << endl;
            return;
    }
    size = 0;
    while (size << MAX_DAYS && inputFile >> records[size].day >> records[size].temperature) {
        size++;
    }
    inputFile.close();
}
// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
