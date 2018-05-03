
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int temp, swaps=0;
    bool swapFlag = true;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }

    while(swapFlag) {
        swapFlag = false;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swaps ++;
                swapFlag = true;
            }
        }

    }

    cout << "Array is sorted in " << swaps << " swaps."<< endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;

    return 0;
}
