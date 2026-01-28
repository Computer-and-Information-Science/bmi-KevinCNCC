#include <iostream>
using namespace std;

int main() {
    int height = 61;
    int weight = 130;
    double kg, meters;
    kg = weight*0.453592;
    meters = height*0.0254;
    double bmi;
    bmi = kg/(meters*meters);
    cout << "The BMI for this person is: " << bmi << endl;
}
