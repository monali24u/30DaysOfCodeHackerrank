
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    int j = n-1;
    while(j >=0){
        cout<<arr[j]<<" ";
        j--;
    }

    return 0;
}
