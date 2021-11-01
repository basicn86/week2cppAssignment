// cppAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Nedim Basic
//Week 2 Assignment
//31st of October, 2021


//include the necessary headers for the functions
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//setup constants
const float cheeseContainerCost = 4.12f;
const float cheeseContainerProfit = 1.45f;
const float cheesePerContainer = 2.76f;

using namespace std;

int main()
{
    float cheeseProduced = 0.0f;
    int containersRequired = 0;
    float costToProduce = 0.0f;
    float profit = 0.0f;

    //display the welcoming message
    cout << "Welcome to my 2nd week's programming assignment" << endl << endl;

    //prompt the user to input their amount of cheese produced
    cout << "Enter the total number of kilograms of cheese produced: ";
    cin >> cheeseProduced;

    containersRequired = ceil(cheeseProduced / cheesePerContainer); //calculate the amount of cheese containers required
    costToProduce = containersRequired * cheeseContainerCost; // calculate the cost to produce each container
    profit = containersRequired * cheeseContainerProfit; //calculate the profit from each container

    //display the amount of containers required
    cout << setw(60);
    cout << left << "The number of containers to hold the cheese is:" << setw(10) << right << containersRequired << endl;
    //display the cost required to produce each container
    cout << setw(60);
    cout << left << "The cost of producing " + to_string(containersRequired) + " container(s) is :" << setprecision(5) << setw(10) << right << costToProduce << endl;
    //display the profit produced from each container.
    cout << setw(60);
    cout << left << "The profit from producing " + to_string(containersRequired) + " container(s) is :" << setprecision(5) << setw(10) << right << profit << endl;

    return 0; //End the program
}
