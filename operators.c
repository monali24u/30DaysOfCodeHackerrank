#include <bits/stdc++.h>
using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;

    double tip = meal_cost * ((double)tip_percent/100);
    double tax = meal_cost * ((double)tax_percent/100);
    double totalCost = meal_cost + tip + tax;
    int cost = (int)totalCost;
    double rem = totalCost - cost;
    if(rem < 0.5)
        cout<<"The total meal cost is "<<cost<<" dollars."<<endl;
    else
       cout<<"The total meal cost is "<<cost+1<<" dollars."<<endl;

    return 0;
}
