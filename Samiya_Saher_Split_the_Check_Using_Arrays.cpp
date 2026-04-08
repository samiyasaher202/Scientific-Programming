/*
  Samiya Saher, PeopleSoft ID: 2433691
  Program #3: Sharing the Bill (Using Arrays)
  Course 201: Scientific Programming with C++ (Spring 2026)

  This program asks for five friends' names and their individual bills,
  then asks for a tip percentage, computes the total including tip, and
  computes the equal share each person must pay.

  Constraints satisfied:
  - Exactly 5 variables are declared and used:
      1) char names[5][30]
      2) float bills[5]
      3) float tipPercent
      4) float totalBill
      5) float averageBill
  - Uses loops and arrays of base data types
  - Does NOT use STL containers (vector/list/etc.)
  - Does NOT use string objects
*/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    // Exactly 5 variables (required)
    char names[5][30];
    float bills[5];
    float tipPercent;
    float totalBill;
    float averageBill;

    // Get names
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name of friend: ";
        cin >> setw(30) >> names[i];
    }

    cout << endl;

    // Get bills
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter bill for " << names[i] << ": ";
        cin >> bills[i];
    }

    cout << endl;

    // Display names
    cout << "Names of Friends: ";
    for (int i = 0; i < 5; i++)
    {
        cout << names[i];
        if (i < 4) cout << ", ";
    }
    cout << endl;

    // Display bills
    cout << "Individual bills: ";
    for (int i = 0; i < 5; i++)
    {
        cout << bills[i];
        if (i < 4) cout << ", ";
    }
    cout << endl;

    cout << endl;

    // Tip input
    cout << "Enter tip percentage: ";
    cin >> tipPercent;

    cout << endl;

    // Compute total
    totalBill = 0.0f;
    for (int i = 0; i < 5; i++)
    {
        totalBill += bills[i];
    }

    // Add tip
    totalBill = totalBill * (1.0f + tipPercent / 100.0f);

    // Compute average
    averageBill = totalBill / 5.0f;

    // Output (2 decimals)
    cout << fixed << setprecision(2);
    cout << "Total bill plus tip: $" << totalBill << endl;
    cout << "Each of us must pay: $" << averageBill << endl;

    return 0;
}