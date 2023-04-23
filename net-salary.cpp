/* Write a program to calculate Net Salary
with Inputs : Basic Salary, Allowances %, Deductions %
Formula used :
Net Salary = Basic Salary + (Basic Salary * Allowances %)/100 - (Basic Salary * Deductions %)/100 */

#include <iostream>
using namespace std;

int main()
{
    float basic_salary, allowances, deductions, net_salary;

    cout << "Enter Basic Salary :";
    cin >> basic_salary;
    cout << "Enter percentage of Allowances :";
    cin >> allowances;
    cout << "Enter percentage of Deductions :";
    cin >> deductions;

    net_salary = basic_salary + (basic_salary * allowances) / 100 - (basic_salary * deductions) / 100;

    cout << "The Net Salary for the above entered details will be :" << net_salary;

    return 0;
}