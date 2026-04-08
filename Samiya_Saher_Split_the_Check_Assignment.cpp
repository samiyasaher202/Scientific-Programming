/*
  Samiya Saher, PeopleSoft ID: 2433691
  Program #2: Sharing the Bill
  Course 201: Scientific Programming with C++ (Spring 2026)

  This program calculates each person’s equal share of a restaurant bill,
  including a tip, for five friends. It uses straight-line logic only:
  no loops and no arrays.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Exactly 13 variables (required):
    // 5 names
    string name1, name2, name3, name4, name5;
    // 5 bills
    double bill1, bill2, bill3, bill4, bill5;
    // 1 tip percentage, 1 total bill, 1 average bill
    double tipPercent, totalBill, averageBill;

    // Input: names
    cout << "Enter name of friend: ";
    cin >> name1;
    cout << "Enter name of friend: ";
    cin >> name2;
    cout << "Enter name of friend: ";
    cin >> name3;
    cout << "Enter name of friend: ";
    cin >> name4;
    cout << "Enter name of friend: ";
    cin >> name5;

    cout << endl;

    // Input: bills
    cout << "Enter bill for " << name1 << ": ";
    cin >> bill1;
    cout << "Enter bill for " << name2 << ": ";
    cin >> bill2;
    cout << "Enter bill for " << name3 << ": ";
    cin >> bill3;
    cout << "Enter bill for " << name4 << ": ";
    cin >> bill4;
    cout << "Enter bill for " << name5 << ": ";
    cin >> bill5;

    cout << endl;

    // Display entered names and bills
    cout << "Names of Friends: " << name1 << ", " << name2 << ", " << name3
         << ", " << name4 << ", " << name5 << endl;

    cout << "Individual bills: " << bill1 << ", " << bill2 << ", " << bill3
         << ", " << bill4 << ", " << bill5 << endl;

    cout << endl;

    // Input: tip percentage
    cout << "Enter tip percentage: ";
    cin >> tipPercent;

    cout << endl;

    // Compute total + tip, then equal share
    totalBill = (bill1 + bill2 + bill3 + bill4 + bill5) * (1 + tipPercent / 100.0);
    averageBill = totalBill / 5.0;

    // Output with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Total bill plus tip: $" << totalBill << endl;
    cout << "Each of us must pay: $" << averageBill << endl;

    return 0;
}