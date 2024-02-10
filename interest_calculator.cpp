#include <iostream>
#include <cmath>
using namespace std;


double compounded_per_year_interest(double principal, float rate, int time, int cpy){
    /*
        Function to calculate compounding interest when interest is not continuous.

        Args:
        principal (float): The inital amount of money.
        rate (float): The annual interest rate (expressed as a decimal).
        time (int): the number of years the interest is compounded for.
        compound_per_year (int): The number of times the interest is compounded per year.

        Returns:
        float: The total amount after compounding interest.
    */
    double amount;

    amount = principal * pow(1 + rate / cpy, cpy * time);

    return amount;
}


double continous_interest(double principal, float rate, int time){
    /*
        Function to calculate the continuous compounding interest.

        Args:
        principal (float): The inital amount of money.
        rate (float): The annual interest rate (expressed as a decimal).
        time (int): the number of years the interest is compounded for.

        Returns:
        float: The total amount after compounding interest.
    */
    double amount;

    amount = principal * exp(rate*time);

    return amount;
}


int main() {
    /* This function to test other functions */

    double principal, rate, time, cpy, amount;

    cout << "Prinicpal : ";
    cin >> principal;

    cout << "Rate (percent in deciaml) : ";
    cin >> rate;

    cout << "Time (in years) : ";
    cin >> time;

    cout << "The amount of times the interest gets compounded per year : ";
    cin >> cpy;

    amount = compounded_per_year_interest(principal, rate, time, cpy);

    cout << endl << "compounded_per_year_interest : " << amount << endl;

    amount = continous_interest(principal, rate, time);

    cout << "continous_interst : " << amount;

    return 0;
}