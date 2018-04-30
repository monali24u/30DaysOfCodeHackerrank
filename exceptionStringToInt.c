
#include <iostream>
using namespace std;


int main(){
    string S;
    cin >> S;

    try{
        int number;
        number = stoi(S);
        cout<<number<<endl;
    }
    catch(exception a){
        cout<<"Bad String";
    }

    
    return 0;
}
