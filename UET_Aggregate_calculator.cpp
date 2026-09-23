#include <iostream>
using namespace std;
int main()
{
    float marks[3];
    float aggregate[3];
    float t_aggregate;

    cout << "Enter Your Matriculation Marks:  ";
    cin >> marks[0];
    marks[0] = (marks[0] * 100) / 1200;

    cout << "Enter Your Intermediate Part_1 Marks: ";
    cin >> marks[1];
    marks[1] = (marks[1] * 100) / 560;

    cout << "Enter Your Ecat Marks: ";
    cin >> marks[2];
    marks[2] = (marks[2] * 100) / 400;

    aggregate[0] = (17.0 / 100) * marks[0];
    aggregate[1] = (50.0 / 100) * marks[1];
    aggregate[2] = (33.0 / 100) * marks[2];

    t_aggregate = (aggregate[0] + aggregate[1] + aggregate[2]);

    cout << "Your Total Aggregate is: " << t_aggregate << endl;
}