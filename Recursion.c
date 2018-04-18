#include <iostream>
#include <algorithm>
using namespace std;


int factorial(int number)
{
    int temp;

    if(number <= 1){
        return 1;
    }

    temp = number *(factorial(number-1));
    return temp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>> N;
    int result = factorial(N);
    cout<<result;

    return 0;
}
