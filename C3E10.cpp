
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nick Cook
 */

#include <string>
#include <iostream>
using namespace std;


int main()
{
    cout << "Provide an operation and two values:\n";
    string operatus;
    double res1;
    double res2;
    cin >> operatus >> res1 >> res2;

    double result = 0;
    if (operatus == "+")
        result = res1 + res2;
    else if (operatus == "-")
        result = res1 - res2;
    else if (operatus == "*")
        result = res1 * res2;
    else if (operatus == "/")
        result = res1 / res2;

    cout << "The result is " << result << '\n';
}